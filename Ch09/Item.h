#pragma once

#include <stdio.h>


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
	//int* itemAttaPower;		// �������� ���ݷ�
	char (*itemImage)
}Item;

void SetItem(Item* itemptr);