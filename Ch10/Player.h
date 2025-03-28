#pragma once

#include "ConsoleGame.h"

/*
* ������
* enum �̸�;
* �̸��� �����Ѵ�. ���ڿ� �̸��� �����Ų��. ex) const double PI = 3.14; => �ɺ��� ��� 
* 
* ����: ex. const int ONE; TWO; THREE; => �������� ��ȣ
*/



// ������ �ڸ����� �̿��ؼ� ������ ǥ���Ѵ�.
// 00 0000 0000		(�ĺ���ȣ)(������ ����)(�ε��� ��ȣ)

typedef enum _COLOR
{
	RED,
	GREEN,
	BLUE

}Color, COLOR;

typedef enum _RACE
{
	HUMAN, ORC, TROLL
}Race;

typedef struct _Player
{
	char* name;		// �̸��� �������� ���� ������ �����Ѵ�.
	COORD pos;		// �÷��̾��� ��ǥ�� �����ϴ� �Լ�
	Race race;		// �÷��̾ ������ ����
}Player;

void GetPlayerName(Player player);		// �÷��̾� �̸��� �������� �Լ�
void SetPlayerName(Player* playerptr);	// �÷��̾� �̸��� �����ִ� �Լ�
void SetPlayerInput(Player* playerptr);
void SetPlayerRace(Player* playerptr);

void SetPlayer(Player* playerptr);

void SelectColor(Color color);

//void GetPlayerRace();

void ShowPlayerInfo(Player* playerptr, COORD UIPos);