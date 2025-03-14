// 무엇을 만들것인가?

#include "PlayerInput.h"

int main()
{
	int playerX = 0;
	int playerY = 0;

	while (true)	// 프로그램을 계속 실행시켜라
	{
		if (_kbhit())
		{
			if(GetAsyncKeyState(VK_LEFT))	// 방향키 왼쪽
			{
				playerX -= 2;
			}
			if (GetAsyncKeyState(VK_RIGHT))
			{
				playerX += 2;
			}
			if (GetAsyncKeyState(VK_UP))
			{
				playerY--;
			}
			if (GetAsyncKeyState(VK_DOWN))
			{
				playerY++;
			}
		}
	}
}