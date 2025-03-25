#pragma once

#include <stdio.h>

#define STAGE_COL2 20
#define STAGE_ROW2 30

/*
* 아이템 구조체
* 
* 1. 아이템 이름
* 2. 아이템 스텟 (공격력, 가격, 내구도 등)
* 3. 2차원 배열 (이미지)
*/

// 구글에 아스키 코드 이미지 또는 아스키 아트 검색하기 
typedef struct _ITEM
{
	char* itemName;			// 아이템 이름
	char (*itemImage)[STAGE_ROW2 + 1];
	char* itemStat;		// 아이템의 능력치
}Item;

void SetItem(Item* itemptr, int index2);

#define STAGE_COL3 50
#define STAGE_ROW3 50
typedef struct _CHARACTER
{
	char* characterName;			// 아이템 이름
	char (*characterImage)[STAGE_ROW3 + 1];
	//char* itemStat;		// 아이템의 능력치
}Character;

void SetCharacter(Character* characterptr, int index3);