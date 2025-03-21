#pragma once

#include <stdio.h>
#include <Windows.h>	// �ܼ� ���� �Լ�
#include <time.h>		// time �Լ�
#include <stdlib.h>		// srand rand �Լ�
#include <conio.h>		// getch �Լ�
#include <stdbool.h>	// true, false ��� ����

typedef struct _Player	// �÷��̾� ����ü
{
	char* playerName;
	COORD pos;
	
}Player;

typedef struct _Item    // ������ ����ü
{
	char* itemName;
	COORD pos;
	bool hasItem;		// �������� ������ �ִ��� Ȯ���ϰ� ������ true�� ��ȯ�Ѵ�.
	// �̹��� �� ������ �� �� �ִ�.
}Item;

// ����ü stage -> 2���� �迭�� �����Ѵ�. 

void PlayerInputKey(Player* playerptr);		// �÷��̾ Ű�� �޾� �����̰� �ϴ� �Լ�
void ShowPlayer(const Player* playerptr);	// �÷��̾ �����ִ� �Լ�

void InteractWithItem(Player* playerptr, Item* itemptr);	// �������� �����ϴ��� Ȯ���ϴ� �Լ�
void ShowplayerItemInfo(Item* itemptr);	// �����۰� �÷��̾��� ������ ��Ÿ���� �Լ�	// �ּҷ� ������
void ShowAllPlayerItemInfo(Item itemArray[], int length);

void ShowAllItem(Item itemArray[], int length);

void GotoXY2(int posX, int posY);		// ��ǥ �̵� �Լ�
void MoveXY2(COORD pos);				// Ư�� ��ǥ�� �̵��϶�� �Լ� // �����ϴ� ���ڰ� �ٸ��� �Լ� �̸��� ���� �� �� �ִ�. (C++����)

// �� ���� ��ǥ�� �Ű������� �޾ƿͼ� ������ ���ϴ� �Լ�
BOOL ComPareCOORD(COORD pos1, COORD pos2);	// ������ true �ٸ��� false ��ȯ