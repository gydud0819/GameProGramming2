// ������ ������ΰ�?

#include "PlayerInput.h"

int main()
{
	int playerX = 0;
	int playerY = 0;

	while (true)	// ���α׷��� ��� ������Ѷ�
	{
		if (_kbhit())
		{
			if(GetAsyncKeyState(VK_LEFT))	// ����Ű ����
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