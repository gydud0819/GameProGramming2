#include "Inventory.h"
#pragma once

//int* inventoryCount = NULL;

void ShowInventoryCount(int* invertory)
{
	if (invertory == NULL)
	{
		printf("현재 인벤토리의 주소가 할당되어 있지 않습니다.\n");
	}
	else
	{
		printf("현재 인벤토리의 최대 수 : %d\n", *invertory);
		
	}
}

void IncreaseInventoryCount(int* inventory, int increaseCount)
{
	*inventory = increaseCount;
	
}


