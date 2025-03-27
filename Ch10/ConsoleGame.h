/*
* �ۼ���	: 2025-03-26
* �ۼ���	: ��ȿ��	
* ����	: �ܼ� ���� �����
*/

/*
* �ܼ� ���� �����
* 
* ���� ���� ��� ��
* 2���� �迭, ����ü, ������
* 
* 1. ���������� ����� Ư�� ��ġ�� �����ϸ� ���� ���������� �̵��Ѵ�.
* 2. �ܼ� ȭ�� ���� UI�� ������ִ� ����� �Լ��� �����Ѵ�.
*/

#pragma once

#include <stdio.h>		// printf, scanf_s �Լ�
#include <stdlib.h>		// rand �Լ�
#include <stdbool.h>	// bool �Լ�
#include <Windows.h>	// GetAsyc, system("cls");
#include <time.h>		// �ð� ���� 
#include <conio.h>		// _getch() �Է� ��� �Լ�
#include "Stage.h"

//typedef struct _POS
//{
//	int x;
//	int y;
//}POS;

void GotoXY(int x, int y);
// 2���� �迭�� �ּҷ� ���������� � ���·� �����ؾ� �ұ�?
// char (*Stage)[������ ����]
void ShowStage(char (*Stage)[STAGE_WIDTH +1], COORD pos);


// �÷��̾��� ��ǥ, stage ���� ���ڰ�(&)

char ReturnValueFromStage(char(*Stage)[STAGE_WIDTH + 1], COORD pos); // x y ��ǥ�� ����ִ� ���ڸ� ��ȯ�ϴ� �Լ�

char ReturnValueFromStruct(char(*Stage)[STAGE_WIDTH + 1], COORD pos);

// ���� ���������� �̵��� �������� ����� �Լ�
BOOL CanMoveStage(char(*Stage)[STAGE_WIDTH + 1], COORD playerPos, char exitCharacter);

// ���� ���������� �Ѿ��� �Լ�
void NextStage(char(*Stage)[STAGE_WIDTH + 1], COORD stagePos);

COORD plusPos(COORD pos1, COORD pos2);

//typedef struct _PLAYER
//{
//	int playerX;
//	int playerY;
//
//}Player;

//int playerX;
//int playerY;

//void GetPlayerKeyInput(COORD pos);	// �Է¹޾ƶ�. �÷��̾� �Է� Ű��