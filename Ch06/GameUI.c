#include "GameUI.h"
#pragma once

/*
* ���� ��ǥ : �÷��̾��� ��ǥ�� Ű����κ��� �Է¹޾� ����Ǵ� �Լ� �����
* 
* 1. �÷��̾� ��ǥ ���� - ����ü�� ����
* 2. Ű����� �Է¹޴� �Լ� ����� - �÷��̾��� ��ǥ�� �Ű� ������ �޴� �Լ� ex) Player*
* 3. Ŀ�� ��ġ�� �����ؼ� UI�� ����ϱ�
*/

bool ItemExit;	// �������� ������ �Ծ��ٴ� ������ ��µǰ� �ϴ� ��.

void GameStart()
{
	int* ItemLv = 1;			// ������ ����
	int* ItemPower = 10;		// ������ ���ݷ�
	
	int* ItemLvptr = &ItemLv;
	int* ItemPowerptr = &ItemPower;

	// �÷��̾��� ������ �Է�
	POS playerPos = { 0,0 };	// �÷��̾� ���� ��ǥ
	Player MyPlayer = { "������", playerPos };

	// ������ ���� �Է�
	POS ItemPos = { 17,23 };	// ������ ��ǥ
	ITEM Item = { "�߿���", ItemPos, &ItemPower, &ItemLv };

	while (true)
	{
		// 1. ������ �Է��� �޴´�.
		// 2. ����� ������ ȭ�鿡 ����Ѵ�.
		// 3. Sleep(100);

		InputPlayerKey(&MyPlayer, &Item);
		ShowPlayerInfo(&MyPlayer);

		ShowItemInfo(&Item);

		Sleep(100);
	}
}

void InputPlayerKey(Player* playerptr, ITEM* itemptr)
{
	system("cls");

	if (_kbhit())	// Ű���带 �Է¹��� �� true, false ��ȯ
	{
		if (GetAsyncKeyState(VK_LEFT))// Ű������ �Է�Ű x��ǥ�� 1
		{
			playerptr->playerPos.posX -= 1;		// --; �� �ᵵ �ɵ�
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			playerptr->playerPos.posX += 1;		// ++;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			playerptr->playerPos.posY -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			playerptr->playerPos.posY += 1;
		}
		if (playerptr->playerPos.posX == itemptr->ItemPos.posX && playerptr->playerPos.posY == itemptr->ItemPos.posY)
		{
			bool ItemExit = true;		// �����۰� �÷��̾� ��ǥ�� ��ġ�ϸ� �������� ȹ���ߴٶ�� Ȱ��ȭ�Ѵ�.
			GotoXY(50, 20);
			printf("�������� ȹ���߽��ϴ�!");

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
	
	GotoXY(playerptr->playerPos.posX, playerptr->playerPos.posY);			
	printf("��");

	
}

void ShowItemInfo(const ITEM* itemptr)
{
	GotoXY(50, 10);
	printf("�������� ����");

	GotoXY(50, 12);
	printf("�������� �̸�: %s", itemptr->ItemName);

	GotoXY(50, 14);			// x ������ 50, y �Ʒ��� 14
	printf("�������� ��ġ : [%d, %d]", itemptr->ItemPos.posX, itemptr->ItemPos.posY);

	GotoXY(50, 16);			// x ������ 50, y �Ʒ��� 16
	printf("�������� ���ݷ� : %d", *itemptr->ItemPower);

	GotoXY(50, 18);			// x ������ 50, y �Ʒ��� 18
	printf("�������� ���� : %d", *itemptr->ItemLv);

	GotoXY(itemptr->ItemPos.posX, itemptr->ItemPos.posY);
	printf("��");
}
