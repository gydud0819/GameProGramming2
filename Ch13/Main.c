/*
* �ۼ���	: 2025-04-03
* �ۼ���	: ��ȿ��
* ����	: ���� ��� �����ϱ�
*/

/*
* 1. ������ �����ͷ� �����ϱ� (�������� ���������� �����ϱ�)
* 2. �������� �����ϱ� (�迭�� ������ �� �ְ� �ؾ��Ѵ�.)
*/

/*
* 1. 2���� �迭 �Լ��� ǥ���ϱ� - void �Լ� �̸� (char (*map)[���� + 1]);
* 2. ���� ���� �� �ε� �ý��� ���ӿ� �����غ��� (����ü, �Լ�, ������ ����غ���)
* 3. ����� ���� ��� ���ϱ� 
*/

#define _CRT_SECURE_NO_WARNINGS
#define NAMELENGTH 50
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

typedef struct _ITEM
{
	char name[NAMELENGTH];	// �̸�
	int price;				// ����
}Item, item;

void AddShopData(Item shop[], int* shopcount, const char* name, int price)
{
	strncpy(shop[*shopcount].name, name, NAMELENGTH);	// strncpy�� ����� �̸� ����
	shop[*shopcount].price = price;
	(*shopcount)++;		// ���� �ε��� 1���� �ø���

	/*for (int i = 0; i < count; i++)
	{
		strncpy(Shop[i].name, item1.name, NAMELENGTH);
		Shop[i].price = item1.price;
	}*/
}

void ShowInventoryTable(Item inventory[], int inventoryCount)	// �������� �����ִ� �Լ�
{
	// �׵θ� �����
	printf("������ �κ��丮\n");
	printf("+------+----------+------------------+\n");
	printf("| ���� |   �̸�   |       ����       |\n");
	printf("+------+----------+------------------+\n");
	for (int i = 0; i < inventoryCount; i++)
	{
		printf("| %4d | %8s |  %4d            |\n", i + 1, inventory[i].name, inventory[i].price);	// ���, ����, �̸� ��
		printf("+------+----------+------------------+\n");
	}
	//_getch();
}

void BuyItem(Item item, Item inventory[], int* count)	// item : ������ ������, inventory : �÷��̾ ������ �κ��丮, �κ��丮�� ���� ��ġ
{
	inventory[*count].price = item.price;
	strncpy(inventory[*count].name, item.name, NAMELENGTH);
	(*count)++;
}

void ShopPhase(Item shop[], Item inventory[], int count, int* inventoryCount, bool* gameQuit)	// 
{
	printf("������ �����߽��ϴ�.\n");
	while (true)
	{
		printf("1. ���� ����� Ȯ���Ѵ� 2. �������� �����Ѵ� 3. ������ ������ 4. ���� ����\n");
		int input = 0;
		scanf("%d", &input);
		int itemIndex = 0;

		switch (input)
		{
		case 1:
			ShowInventoryTable(shop, count);
			break;
		case 2:
			printf("������ ������ ��ȣ�� �����ּ���.\n");
			scanf("%d", &itemIndex);
			BuyItem(shop[itemIndex - 1], inventory, inventoryCount);
			break;
		case 3:
			return;
		case 4:		// 4�� ������ ����
			(*gameQuit) = true;
			return;
		default:
			break;
		}
	}
}

int main()
{
	Item Shop[10];
	int shopCount = 0;
	Item Inventory[10];
	int InventoryCount = 0;

	AddShopData(Shop, &shopCount, "Į", 1000);
	AddShopData(Shop, &shopCount, "Ȳ�ݻ��", 300);
	AddShopData(Shop, &shopCount, "����", 1000);
	AddShopData(Shop, &shopCount, "���Ʈ", 450);

	bool gameQuit = false;	// gameQuit�� true�� �Ǹ� ������ ����ǰ� �Ѵ�.

	while (true)
	{
		ShopPhase(Shop, Inventory, shopCount, &InventoryCount, &gameQuit);

		ShowInventoryTable(Inventory, InventoryCount);

		if (gameQuit)
		{
			break;
		}
	}
	printf("������ ����Ǿ����ϴ�.\n");
}