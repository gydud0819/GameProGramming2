// 무엇을 만들것인가?

#include "PlayerInput.h"

int main()
{
	int playerX = 10;
	int playerY = 10;

	while (true)	// 프로그램을 계속 실행시켜라
	{
		if (_kbhit())
		{
			if(GetAsyncKeyState(VK_LEFT))	// 방향키 왼쪽
			{
				GetInput(&playerX, &playerY);
				//playerX -= 2;
			}
			if (GetAsyncKeyState(VK_RIGHT))
			{
				GetInput(&playerX, &playerY);
				//playerX += 2;
			}
			if (GetAsyncKeyState(VK_UP))
			{
				GetInput(&playerX, &playerY);
				//playerY--;
			}
			if (GetAsyncKeyState(VK_DOWN))
			{
				GetInput(&playerX, &playerY);
				//playerY++;
			}
		}
		system("cls");
		printf("●");
		
		Sleep(50);
	}
}