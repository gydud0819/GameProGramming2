#include "Item.h"
#pragma once
#define ITEMALLCOUNT 5;

void ShowItemInfo()
{
	// �������� �����͸� �����Ѵ�. (���� ������ �������ϼ��� �ְ�, ���̺� ������ �ϼ��� �ִ�.)
	int itemCounts[5] = { 1,2,3,4,5 };
	int itemIndexs[5] = { 1,2,3,4,5 };
	char* itemNames[5] = { "AAA", "BBB", "CCC", "DDD", "EEE" };

	printf("��� �������� �����Ѵ�.\n\n");

	for (int i = 0; i < 5; i++)
	{
		printf("������ ��ȣ : %d, ������ �̸� : %s, ������ ���� : %d��\n\n", itemIndexs[i], itemNames[i], itemCounts[i]);

	}

	char* weaponClass[3] = {"SS", "S", "A"};
	char* weaponName[3] = { "Hamer", "Sward", "Gun" };
	int weaponIndex[3] = { 1,1,1 };

	printf("������ ������ �����Ѵ�.\n\n");


	for (int i = 0; i < 3; i++)
	{
		printf("������ �̸� : %s, ������ ��� : %s, ���� : %d��\n\n", weaponName[i], weaponClass[i], weaponIndex[i]);
	}


}

// ������ �̸��� �迭�� �����͸� �̿��Ͽ� ����غ���

// ��� ������

// ������ �̸� - ���ڿ�
// ������ ���� - ���ڿ�
// 1�� �ε����� �ִ� �������� �̸��� ������ ����ϴ� ��� �����غ���

void ItemExample()
{
	// �迭 Ÿ������  �̸� �����ϱ�
	// char itemName[10];
	// ������ Ÿ������ �̸� �����ϱ�
	// char* itemName

	// �������� �����͸� �����Ѵ�. (���� ������ �������ϼ��� �ְ�, ���̺� ������ �ϼ��� �ִ�.)
	int itemCounts[5] = { 1,2,3,4,5 };
	int itemIndexs[5] = { 1,2,3,4,5 };
	char* itemNames[5] = { "AAA", "BBB", "CCC", "DDD", "EEE" };

	printf("��� �������� �����Ѵ�.\n\n");

	for (int i = 0; i < 5; i++)
	{
		printf("������ ��ȣ : %d, ������ �̸� : %s, ������ ���� : %d��\n\n", itemIndexs[i], itemNames[i], itemCounts[i]);

	}

	char ItemName[5] = "AAA";
	char* ItemNameptr = "BBB";
	printf("%s, %s", ItemName, *ItemNameptr);

}
