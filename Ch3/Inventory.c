#include "Inventory.h"
#pragma once

//int* inventoryCount = NULL;

void ShowInventoryCount(int* invertory)
{
	if (invertory == NULL)
	{
		printf("���� �κ��丮�� �ּҰ� �Ҵ�Ǿ� ���� �ʽ��ϴ�.\n");
	}
	else
	{
		printf("���� �κ��丮�� �ִ� �� : %d\n", *invertory);
		
	}
}

void IncreaseInventoryCount(int* inventory, int increaseCount)
{
	*inventory = increaseCount;
	
}


