#pragma once

#include "ConsoleGame.h"

// GetAsync Ű�� �̵��ϴ� �� �����ϱ�

// Item.h
// Item 2���� �迭�� �����ͼ� Ư�� ��ǥ�� ����ϱ�

// GotoXY

// Ư�� ��ǥ�� �̹��� ����ϱ�

// Ư���� �̺�Ʈ �߻��� ������ ������ ����ϴ� �Լ� �����غ��� 

// ���ڸ� �Է¹޾Ƽ� ���ǹ����� �񱳸� �ϰ� �̺�Ʈ�� �����ϱ� scanf_s, _getch

// Ư�� �������� ȹ���ϸ� �޴� Ű�� ���ؼ� ȹ���� �������� ������ Ȯ���Ѵ�. 

typedef struct PLAYER
{
	int PosX;
	int PosY;
}Player;

void GetPlayerKeyInput(Player* playerptr, COORD pos);