#include "PlayerInput.h"

int MovePlayerX = 1;
int MovePlayerY = 1;

void GetInput(int* playerX, int* playerY)
{
	COORD pos;
	pos.X = MovePlayerX * 2;
	pos.Y = MovePlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
