#pragma once
class theMap {
private:
	int mWidth= 30;
	int mHeight= 20;
	int startX = mWidth / 2;
	int startY = mHeight / 2;

	//void food() {
	//	int posFood[&x][&y] = 0, 0;
	//}
	void outputWall() {
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
		int x = 0; int y = 0;
		COORD pos = { x, y };
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		for (int i = 0; i < mWidth+1; i++)
		{
			COORD pos = { x, y };
			SetConsoleCursorPosition(output, pos);
			cout << "X";
			if (x<mWidth)
			{
				x++;
			}
		}
		for (int i = 0; i < mHeight + 1; i++)
		{
			COORD pos = { x, y };
			SetConsoleCursorPosition(output, pos);
			cout << "X";
			if (y<mHeight)
			{
				y++;
			}
		}
		for (int i = 0; i < mWidth + 1; i++)
		{
			COORD pos = { x, y };
			SetConsoleCursorPosition(output, pos);
			cout << "X";
			if (x>0)
			{
				x--;
			}
		}

		for (int i = 0; i < mHeight + 1; i++)
		{
			COORD pos = { x, y };
			SetConsoleCursorPosition(output, pos);
			cout << "X";
			y--;
		}

		CloseHandle(output);
	}
public:
	theMap(int width, int height) {
		mWidth = width;
		mHeight = height;
		outputWall();
	}

};
