#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <time.h>
#include <vector>
#include <fstream>

using namespace std;

#define WIDTH 20
#define HEIGHT 20
char Level[HEIGHT][WIDTH];

void initialize(int size, int snakeX[], int snakeY[]);
void buildLevel();
void reDraw();
void update(int &size, int snakeX[], int snakeY[], int tempX[], int tempY[], int &itemCount, int &points);
void speedUpdate();

void items(vector<int> &itemX, vector<int> &itemY, int &itemCount, int snakeX[], int snakeY[], int &size, int tailX, int tailY, int &points);

bool isGameOver(int snakeX[], int snakeY[], int size);
//void highScore(int points);
class theMap {
private:

void initialize(int size, int snakeX[], int snakeY[]) {
	snakeX[0] = WIDTH / 2;
	snakeY[0] = 3;

	snakeX[1] = WIDTH / 2;
	snakeY[1] = 2;

	snakeX[2] = WIDTH / 2;
	snakeY[2] = 1;

	for (int i = 3; i < 100; i++) {
		snakeX[i] = NULL;
		snakeY[i] = NULL;
	}
	for (int i = 0; i < size; i++) {
		Level[snakeY[i]][snakeX[i]] = 'o';
	}
}

void buildLevel() {

	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			Level[0][j] = '*';
			Level[i][0] = '*';
			Level[i][WIDTH - 1] = '*';
			Level[HEIGHT - 1][j] = '*';
		}
	}
}

public:
	void startGame(int size, int snakeX[], int snakeY[]) {
		initialize(size, snakeX, snakeY);
		buildLevel();
	}
};

class theSnakes {


};

int main() {
	theMap map;
	theSnakes Player1;
	theSnakes Player2;
	theSnakes Player3;
	theSnakes Player4;
	int size = 3;
	int itemCount = 0;
	int points = 0;
	int snakeX[100], snakeY[100], tempX[100], tempY[100];
	map.startGame(size, snakeX, snakeY);
	update(size, snakeX, snakeY, tempX, tempY, itemCount, points);

	_getch();
	return 0;
}



void reDraw() {
	for (int i = 0; i < HEIGHT; i++) {
		cout << endl;
		for (int j = 0; j < WIDTH; j++) {
			cout << " " << Level[i][j];
		}
	}
}

void cScreen() {
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

void update(int &size, int snakeX[], int snakeY[], int tempX[], int tempY[], int &itemCount, int &points) {
	int count = 0;
	char input = ' ';
	char prevInput = 's';
	int tailX, tailY;
	bool gameOver = false;
	vector<int> itemX, itemY;

	while (!gameOver) {
		speedUpdate();

		tailY = snakeY[size - 1];
		tailX = snakeX[size - 1];

		Level[tailY][tailX] = ' ';
		items(itemX, itemY, itemCount, snakeX, snakeY, size, tailX, tailY, points);

		for (int i = 0; i < size - 1; i++) {
			tempX[i + 1] = snakeX[i];
			tempY[i + 1] = snakeY[i];
		}

		tempX[0] = snakeX[0];
		tempY[0] = snakeY[0];

		for (int i = 0; i < size; i++) {
			snakeX[i] = tempX[i];
			snakeY[i] = tempY[i];
		}
		if (_kbhit()) {
			input = _getch();
		}

		if (prevInput == 's') {
			snakeY[0] += 1;
			if (input == 'a') {
				prevInput = 'a';
			}
			else if (input == 'd') {
				prevInput = 'd';
			}
		}

		else if (prevInput == 'w') {
			snakeY[0] -= 1;
			if (input == 'a') {
				prevInput = 'a';
			}
			else if (input == 'd') {
				prevInput = 'd';
			}
		}

		else if (prevInput == 'd') {
			snakeX[0] += 1;
			if (input == 'w') {
				prevInput = 'w';
			}
			else if (input == 's') {
				prevInput = 's';
			}
		}

		else if (prevInput == 'a') {
			snakeX[0] -= 1;
			if (input == 'w') {
				prevInput = 'w';
			}
			else if (input == 's') {
				prevInput = 's';
			}
		}

		for (int i = 0; i < size; i++) {
			Level[snakeY[i]][snakeX[i]] = 'o';
		}

		gameOver = isGameOver(tempX, tempY, size);
		if (gameOver == true) {
			cout << "\a\a";
			break;
		}

		cScreen();
		reDraw();
	}
}

void items(vector <int> &itemX, vector <int> &itemY, int &itemCount, int snakeX[], int snakeY[], int &size, int tailX, int tailY, int &points)
{
	clock_t interval = clock() % 3000;
	cout << "\t\t	Points: " << points << endl;

	if (interval > 2800)
	{
		itemCount++;
		srand((unsigned)time(NULL));
		itemX.push_back(rand() % (WIDTH - 2) + 1);
		itemY.push_back(rand() % (HEIGHT - 2) + 1);

		Level[itemY.back()][itemX.back()] = '@';
	}

	for (int i = 0; i < itemCount; i++) {
		if ((snakeX[0] == itemX.at(i)) && (snakeY[0] == itemY.at(i)))
		{
			points += 100;
			itemCount--;
			itemY.erase(itemY.begin() + i);
			itemX.erase(itemX.begin() + i);

			size++;
			snakeX[size - 1] = tailX;
			snakeY[size - 1] = tailY;
			cout << "\a";
		}
	}
}

	void speedUpdate()
	{
		if (clock() <= 5000) {
			Sleep(100);
		}
		else if ((clock() > 5000) && (clock() < 10000)) {
			Sleep(50);
		}
		else if ((clock() >10000) && (clock() <15000)) {
			Sleep(25);
		}
		else
		{
			Sleep(10);
		}
	}

	bool isGameOver(int snakeX[], int snakeY[], int size){
		for (int i = 2; i < size; i++) {
			if ((snakeX[0] == snakeX[i]) && (snakeY[0] == snakeY[i])) {
				cout << endl << "\t\t	YOU LOSE!";
				_getch();
				return true;
			}
		}
		if ((snakeX[0] == WIDTH - 1) || (snakeY[0] == HEIGHT - 1) || (snakeX[0] == 0) || (snakeY[0] == 0)) {
			cout << endl << "\t\t	YOU LOSE!";
			_getch();
			return true;
		}
		else {
			return false;
		}
	}