#pragma once

#include <stdio.h>
#include <string.h>

#define NAMELENGTH 50

/*
* ����ü
* player
* char name[20] (�̸��� �ִ� ����)
*/

typedef struct _Player
{
	char playerName[NAMELENGTH];
}Player;

void SetPlayerName(char* playerNameptr);	// �÷��̾� �̸��� �����ִ� �Լ� (�ּҸ� ��������� �Ѵ�.)

void SetPlayer(Player* player, const char* Name);

void ShowPlayerInfo(Player* player);
