#pragma once

#include <stdio.h>		// printf, scanf_s
#include <Windows.h>	// �ܼ� ���� �Լ�
#include <time.h>		// time �Լ�
#include <stdlib.h>		// srand rand �Լ�
#include <conio.h>		// getch �Լ�
#include <stdbool.h>	// true, false ��� ����
#include "StructPointer.h"

/*
* �������� ����ü
* �������� �̸�
* �������� ��ǥ
* �������� ����
* �������� ���ݷ� (��ȭ ���ʽ�)
*/

typedef struct _ITEM
{
	char* ItemName;
	POS ItemPos;
	int* ItemLv;		// ������ ����
	int* BasicPower;	// �⺻ �Ŀ�
	int* WeaponPower;	// ����ġ �Ŀ�
	int* ItemPower;		// ������ ���ݷ�

}ITEM;

// �������� ��ǥ, �÷��̾��� ��ǥ�� ���ؼ� �������� x�� �÷��̾� x�� ���ϰ� 
// y�� ���� ���Ͽ� ��ġ�ϸ� �������� ȹ���ߴٶ�� �ϱ�

void GameStart();

void InputPlayerKey(Player* playerptr);

void GotoXY(int x, int y);	// �Ǽ��� ���ɼ��� ����.

//void GotoXY2(int x, int y);	// x�� ����� ���� �ִ�. 

void ShowPlayerInfo(const Player* playerptr);