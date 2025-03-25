#pragma once

#include <stdio.h>

#define STAGE_COL2 20
#define STAGE_ROW2 30

/*
* ������ ����ü
* 
* 1. ������ �̸�
* 2. ������ ���� (���ݷ�, ����, ������ ��)
* 3. 2���� �迭 (�̹���)
*/

// ���ۿ� �ƽ�Ű �ڵ� �̹��� �Ǵ� �ƽ�Ű ��Ʈ �˻��ϱ� 
typedef struct _ITEM
{
	char* itemName;			// ������ �̸�
	char (*itemImage)[STAGE_ROW2 + 1];
	char* itemStat;		// �������� �ɷ�ġ
}Item;

void SetItem(Item* itemptr, int index2);

#define STAGE_COL3 50
#define STAGE_ROW3 50
typedef struct _CHARACTER
{
	char* characterName;			// ������ �̸�
	char (*characterImage)[STAGE_ROW3 + 1];
	//char* itemStat;		// �������� �ɷ�ġ
}Character;

void SetCharacter(Character* characterptr, int index3);