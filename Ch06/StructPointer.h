#pragma once

#include <stdio.h>
#include <Windows.h>

// �÷��̾� - �̸�, ��ǥ, ������ ������ �����غ���

typedef struct _POS
{
	int posX;
	int posY;
}POS;


typedef struct _Player
{
	char* playerName;	// "ȫ�浿" "ȫ"�� ��ǥ? �ּ�?�� �����ͼ� �̸��� �����Ѵ�.
	POS playerPos;		// ��ǥ�� ������ �����Ұ��� �ּҷ� �����Ұ����� ���� ����� �޶�����.

}Player;

void Ch6Example();

void ShowPlayerInfo1(Player player);

void ShowPlayerInfo2(const Player* playerptr); // �����ͷ� ���

void ShowPlayerInfo3(const Player* playerptr);	// �����ͷ� ���

void ChangePlayerPos(Player* playerptr);