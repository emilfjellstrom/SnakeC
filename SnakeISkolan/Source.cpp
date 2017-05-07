//#include <iostream>
//#include <Windows.h>
//#include <time.h>
//#include <vector>
//#include <conio.h>
//#include "Map.h"
//using namespace std;
//
//int randomizer(int AmountHeight,int AmountLenght, int height, int lenght) {
//
//	srand(time(NULL));					
//		height=(rand() % AmountHeight);
//		lenght = (rand() % AmountLenght);
//		return height, lenght;
//}
//
//
//class theSnake {
//private:
//	theMap map;
//	int size = 3;
//
//public:
//#ifndef Map.h
//#define Map.h
//#endif // !Map.h
//
//	int snakeLength = 3;
//	int snakeSpeed = 1;
//	int snakeX[100], snakeY[100], tempX[100], tempY[100];
//
//	void speedUpdate() {
//		if (clock()<= 9000)
//		{
//			Sleep(100);
//		}
//		else if (clock()>9000 && clock()<=18000)
//		{
//			Sleep(50);
//		}
//		else if (clock()>18000)
//		{
//			Sleep(25);
//		}
//		//switch (clock())
//		//{
//		//case clock()<= 9000: Sleep(100);
//		//case clock()> 9000 && clock < 18000: Sleep (50);
//		//case clock() > 18000 && clock() < (36000) : Sleep(25);
//		//default:
//		//	break;
//		//}
//	}
//	void snakeInput(char up, char down, char left, char right) 
//	{
//
//	}
//	void customize() {
//		int a, b, c, d;
//		int tempY;
//		int tempX;
//		cout << "Enter controls" << endl;
//		cout << "Up: ";
//		cin >> a;
//		cout << "Down: ";
//		cin >> b;
//		cout << "Left: ";
//		cin >> c;
//		cout << "Right: ";
//		cin >> d;
//		snakeInput(a, b, c, d);
//		system("CLS");
//		//cout << "Enter the height and lenght of the playing field.";
//		//cin >> tempY;
//		//cin >> tempX;
//	}
//};
//	bool isGameOver() {
//#ifndef Map.h
//#define Map.h
//#endif // !Map.h
//		theMap map;
//		for (int i = 2; i < size; i++)
//		{
//			if ((snakeX[0] == snakeX[i]) && (snakeY[0] == 0))
//			{
//				cout << endl << "\t\t	You Lose!";
//				_getch();
//				return true;
//			}
//		}
//		if ((snakeX[0] == mWidth)
//		{
//
//		}
//	}
//
//void printMenu() {
//		cout << "Enter the number of what you want to do." << endl << endl;
//	cout << "1. Customize Settings" << endl;
//	cout << "0. Exit" << endl;
//
//}
//
//void Update() {
//	int count = 0;
//	char input = ' ';
//	int tailX, tailY;
//	bool gameOver = false;
//	vector <int> itemX, itemY;
//
//	while (!gameOver) {
//
//	}
//}
//
//int main() {
//	int playGame = 0;
//	int amountPlayers;
//	//theSnake player1;
//	//theSnake player2;
//	//theSnake player3;
//	//theSnake player4;
//	theMap map(79,24);
//	system("pause");
//	
//	
//	//do
//	//{
//	//std::cout << endl << "The Snake!" << endl << "=====================" << endl;
//	//cout << "A game created by the gents: Emil, Sigge and Jonathan." << endl;
//	//cout << "Objective: Eat fruit, grow large. Don't die! You'll die if you hit yourself, any wall or any other player." << endl << endl;
//	//cout << "Enter the amount of players that wants to play. ( 4 is max )" << endl;
//	//cin >> amountPlayers;
//	//system("pause");
//	//system("CLS");
//	//switch (amountPlayers)
//	//{
//
//	//case 1: 
//	//	cout << "Player 1" << endl;
//	//	cout << "Enter the number of what you want to do." << endl << endl;
//	//	cout << "1. Customize Settings" << endl;
//	//	cout << "2. Play" << endl << endl;
//	//	cout << "0. Exit" << endl;
//	//	cin >> playGame;
//	//	if (playGame==1)
//	//	{
//	//		system("CLS");
//	//		player1.customize();
//	//	}
//
//	//case 2:
//	//	cout << "Player 1" << endl;
//	//	cout << "Enter the number of what you want to do." << endl << endl;
//	//	cout << "1. Customize Settings" << endl;
//	//	cout << "2. Play" << endl << endl;
//	//	cout << "0. Exit" << endl;
//	//	cin >> playGame;
//	//	if (playGame == 1)
//	//	{
//	//		player1.customize();
//	//	}
//
//	//	system("CLS");
//	//	cout << "Player 2" << endl;
//	//	printMenu();
//	//	cin >> playGame;
//	//	if (playGame==1)
//	//	{
//	//		system("CLS");
//	//		player2.customize();
//	//	}
//
//	//case 3:
//	//	cout << "Player 1" << endl;
//	//	cout << "Enter the number of what you want to do." << endl << endl;
//	//	cout << "1. Customize Settings" << endl;
//	//	cout << "2. Play" << endl << endl;
//	//	cout << "0. Exit" << endl;
//	//	cin >> playGame;
//	//	if (playGame == 1)
//	//	{
//	//		system("CLS");
//	//		player1.customize();
//	//	}
//
//	//	system("CLS");
//	//	cout << "Player 2" << endl;
//	//	printMenu();
//	//	cin >> playGame;
//	//	if (playGame == 1)
//	//	{
//	//		system("CLS");
//	//		player2.customize();
//	//	}
//
//	//	system("CLS");
//	//	cout << "Player 3" << endl;
//	//	printMenu();
//	//	cin >> playGame;
//	//	if (playGame==1)
//	//	{
//	//		system("CLS");
//	//		player3.customize();
//	//	}
//	//	system("CLS");
//	//case 4:
//	//	cout << "Player 1" << endl;
//	//	cout << "Enter the number of what you want to do." << endl << endl;
//	//	cout << "1. Customize Settings" << endl;
//	//	cout << "2. Play" << endl << endl;
//	//	cout << "0. Exit" << endl;
//	//	cin >> playGame;
//	//	if (playGame == 1)
//	//	{
//	//		system("CLS");
//	//		player1.customize();
//	//	}
//
//	//	system("CLS");
//	//	cout << "Player 2" << endl;
//	//	printMenu();
//	//	cin >> playGame;
//	//	if (playGame == 1)
//	//	{
//	//		system("CLS");
//	//		player2.customize();
//	//	}
//
//	//	system("CLS");
//	//	cout << "Player 3" << endl;
//	//	printMenu();
//	//	cin >> playGame;
//	//	if (playGame == 1)
//	//	{
//	//		system("CLS");
//	//		player3.customize();
//	//	}
//
//	//	system("CLS");
//	//	cout << "Player 4" << endl;
//	//	printMenu();
//	//	cin >> playGame;
//	//	if (playGame==1)
//	//	{
//	//		system("CLS");
//	//		player4.customize();
//	//	}
//	//default:
//	//	break;
//	//}
//
//	//} while (playGame>0);
//}