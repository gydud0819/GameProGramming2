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

	printf("============================================================\n");

	printf("������ ������ �����Ѵ�.\n\n");


	for (int i = 0; i < 3; i++)
	{
		printf("������ �̸� : %s, ������ ��� : %s, ���� : %d��\n", weaponName[i], weaponClass[i], weaponIndex[i]);
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

	printf("============================================================\n");

	printf("��� �������� �����Ѵ�.\n\n");

	for (int i = 0; i < 5; i++)
	{
		printf("������ ��ȣ : %d, ������ �̸� : %s, ������ ���� : %d��\n\n", itemIndexs[i], itemNames[i], itemCounts[i]);

	}

	printf("============================================================\n");

	char ItemName[8] = "AAA";	// �迭(�ε���)�� �̿��ؼ� �����´�.
	char* ItemNameptr = "AAA";	// �����͸� �̿��� �ּҷ� �����´�.
	printf("%s, %s\n", ItemName, ItemNameptr);
	printf("%c\n", *(ItemNameptr + 1));
	printf("%c\n", *(ItemNameptr + 2));
	printf("%c\n", *(ItemNameptr + 3));
	printf("%c\n", *(ItemNameptr + 4));
	printf("%c\n", *(ItemNameptr + 5));
	printf("%c\n", *(ItemNameptr + 6));		// ���� �Ҵ��ϰ� ������ ���� ��� 0�̳� �����Ⱚ���� ������ ä���.
	printf("%c\n", *(ItemNameptr + 7));

}
