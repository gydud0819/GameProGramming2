/*
* ��ǥ : �������� ���� �����ؼ� ����Ѵ�.
* ����, �Ǽ�, ���ڸ� ǥ���ϴ� ��� C��� - C��� ������ ��� ����
* ������ ���� : �̸�, ����, Ÿ��, ��ȣ		#define ITEMCOUNT 5; <- ��� 
* 
* �����۵��� ���� ���������� �ϳ��� �迭�� ��� �������� ǥ���� �� �ִ�. 
* �������� �����ؼ� ������ �����͸� �迭�� ǥ���ߴ�. 
*/

/* 
* ����ü
* Struct : ����ڰ� ���� ������ �ڷ���
* �� �����͸� ���� �����ұ�? (Why)
*/

/*
* 2���� ��ǥ : int x��ǥ, int y��ǥ
* int x;
* int y;
* (1, 0);
* �׻� 2���� ��ǥ�� �̷�����ִ�. ����ڰ� ���� ��ǥ�� �ǹ��ϴ� �ڷ����� ���� ���� ������? 
*/

/*
* ����ü �������
* 
* struct �̸�
* {
*	int PosX;
*	int PosY;
* };
* 
* 1. ����ü ǥ�� ��� : struct �̸� { };
* 2. ����ü �ȿ� ����ü�� ���� �� ������?		ex) �� : ����, ������ - ���� ����, ȣ�� ���̸� �� �� �ִ�. 
*/

#pragma once
#include <stdio.h>
#include <stdbool.h>

typedef struct Pos		// ����ü�� �̿��Ͽ� �ڷ��� �����
{
	int PosX;
	int PosY;
}Pos;

/*
* ����ü�� ������ �� ���� struct Ű���带 �ٿ��ִ� ���� ���ŷο� ��
* typedef�� ����ϸ� ~ Ÿ���� �̸���  {} Ÿ�� ������ �� �� �ִ�.
* typedef struct Ÿ���� �̸��� ������ �� �ִ�. 
* ���� struct Ÿ���� �̸��� �����ϸ� struct �̸��� ���·δ� ����� �� �� ����.
*/

/*
* ����ü�� �̿��ؼ� �Լ��� ����� ��
*/

typedef struct Circle		// ������ ���������� ������ �����̴�. -> ���� ���̿� ȣ�� ���̸� ���� �� �ִ�. 
{
	Pos origin;
	double radius;
}Circle;

void StructExample();

void ClaculateCircleInfo(Circle circle);

// �÷��̾��� ��ǥ�� �̿��� �÷��̾��� ������ ����ϴ� �Լ� ����� 
typedef struct MyPlayer
{
	char* playerName;		// �÷��̾� �̸�
	// 1. ��ǥ
	Pos playerPos;			// �÷��̾� ��ǥ
	// 2. ����
	int* playerBasicLv;		// �÷��̾��� �⺻ ����
	// 3. ������
	char* ItemName;			// ������ �̸�
	int* ItemLv;			// �������� ����
	int* ItemPower;			// �������� ���ݷ�
}Player;

void ShowPlayerCurrentPos(Player player);	// �÷��̾��� ���� ��ġ�� �����ִ� �Լ� 

//void MovePlayer(Player player);

//void ShowPlayerCurrentPos2(const Player* player);

