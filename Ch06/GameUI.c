#include "GameUI.h"
#pragma once

/*
* ���� ��ǥ : �÷��̾��� ��ǥ�� Ű����κ��� �Է¹޾� ����Ǵ� �Լ� �����
* 
* 1. �÷��̾� ��ǥ ���� - ����ü�� ����
* 2. Ű����� �Է¹޴� �Լ� ����� - �÷��̾��� ��ǥ�� �Ű� ������ �޴� �Լ� ex) Player*
* 3. Ŀ�� ��ġ�� �����ؼ� UI�� ����ϱ�
*/

void GameStart()
{
	// �÷��̾��� ������ �Է�
	POS playerPos = { 0,0 };	// �÷��̾� ���� ��ǥ
	Player MyPlayer = { "������", playerPos };

	POS ItemPos = { 17,23 };	// ������ ��ǥ
	ITEM Item = { "�߿���", ItemPos };

	int* ItemLv = 1;
	//int* ItemPower=

	int* ItemLvptr = &ItemLv;

	while (true)
	{
		// 1. ������ �Է��� �޴´�.
		// 2. ����� ������ ȭ�鿡 ����Ѵ�.
		// 3. Sleep(100);

		InputPlayerKey(&MyPlayer);
		ShowPlayerInfo(&MyPlayer);

		Sleep(100);
	}
}

void InputPlayerKey(Player* playerptr)
{
	system("cls");

	if (_kbhit())	// Ű���带�� �Է¹��� �� true, false ��ȯ
	{
		if (GetAsyncKeyState(VK_LEFT))// Ű������ �Է�Ű x��ǥ�� 1
		{
			playerptr->playerPos.posX -= 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			playerptr->playerPos.posX += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			playerptr->playerPos.posY -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			playerptr->playerPos.posY += 1;
		}
	}
}

void GotoXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ShowPlayerInfo(const Player* playerptr)
{
	GotoXY(50, 1);			// x ������ 50, y �Ʒ��� 1
	printf("�÷��̾��� ����");

	GotoXY(50, 3);			// x ������ 50, y �Ʒ��� 3
	printf("�÷��̾��� �̸� : %s", playerptr->playerName);
	
	GotoXY(50, 5);			// x ������ 50, y �Ʒ��� 5
	printf("�÷��̾��� ��ġ : [%d, %d]", playerptr->playerPos.posX, playerptr->playerPos.posY);
	
	GotoXY(playerptr->playerPos.posX, playerptr->playerPos.posY);			// x ������ 50, y �Ʒ��� 5
	printf("��");
}
