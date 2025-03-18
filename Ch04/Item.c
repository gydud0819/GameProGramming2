#include "Item.h"
#pragma once
#define ITEMALLCOUNT 5;

void ShowItemInfo()
{
	// 아이템의 데이터를 설정한다. (게임 고유의 데이터일수도 있고, 세이브 데이터 일수도 있다.)
	int itemCounts[5] = { 1,2,3,4,5 };
	int itemIndexs[5] = { 1,2,3,4,5 };
	char* itemNames[5] = { "AAA", "BBB", "CCC", "DDD", "EEE" };


	printf("모든 아이템을 열람한다.\n\n");

	for (int i = 0; i < 5; i++)
	{
		printf("아이템 번호 : %d, 아이템 이름 : %s, 아이템 수량 : %d개\n\n", itemIndexs[i], itemNames[i], itemCounts[i]);

	}

	char* weaponClass[3] = {"SS", "S", "A"};
	char* weaponName[3] = { "Hamer", "Sward", "Gun" };
	int weaponIndex[3] = { 1,1,1 };

	printf("============================================================\n");

	printf("무기의 정보를 열람한다.\n\n");


	for (int i = 0; i < 3; i++)
	{
		printf("무기의 이름 : %s, 무기의 등급 : %s, 수량 : %d개\n", weaponName[i], weaponClass[i], weaponIndex[i]);
	}


}

// 아이템 이름을 배열과 포인터를 이용하여 출력해보기

// 상수 포인터

// 아이템 이름 - 문자열
// 아이템 설명 - 문자열
// 1번 인덱스에 있는 아이템의 이름과 설명을 출력하는 기능 구현해보기

void ItemExample()
{
	// 배열 타입으로  이름 선언하기
	// char itemName[10];
	// 포인터 타입으로 이름 선언하기
	// char* itemName

	// 아이템의 데이터를 설정한다. (게임 고유의 데이터일수도 있고, 세이브 데이터 일수도 있다.)
	int itemCounts[5] = { 1,2,3,4,5 };
	int itemIndexs[5] = { 1,2,3,4,5 };
	char* itemNames[5] = { "AAA", "BBB", "CCC", "DDD", "EEE" };

	printf("============================================================\n");

	printf("모든 아이템을 열람한다.\n\n");

	for (int i = 0; i < 5; i++)
	{
		printf("아이템 번호 : %d, 아이템 이름 : %s, 아이템 수량 : %d개\n\n", itemIndexs[i], itemNames[i], itemCounts[i]);

	}

	printf("============================================================\n");

	char ItemName[8] = "AAA";	// 배열(인덱스)를 이용해서 가져온다.
	char* ItemNameptr = "AAA";	// 포인터를 이용해 주소로 가져온다.
	printf("%s, %s\n", ItemName, ItemNameptr);
	printf("%c\n", *(ItemNameptr + 1));
	printf("%c\n", *(ItemNameptr + 2));
	printf("%c\n", *(ItemNameptr + 3));
	printf("%c\n", *(ItemNameptr + 4));
	printf("%c\n", *(ItemNameptr + 5));
	printf("%c\n", *(ItemNameptr + 6));		// 값을 할당하고도 공간이 남을 경우 0이나 쓰레기값으로 공간을 채운다.
	printf("%c\n", *(ItemNameptr + 7));

}
