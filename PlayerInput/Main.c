// ������ ������ΰ�?

#include "PlayerInput.h"

int main()
{
	int playerX = 10;
	int playerY = 10;

	while (true)	// ���α׷��� ��� ������Ѷ�
	{
		if (_kbhit())
		{
			if(GetAsyncKeyState(VK_LEFT))	// ����Ű ����
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
		printf("��");
		
		Sleep(50);
	}
}