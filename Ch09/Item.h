#pragma once

#include <stdio.h>


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
	//int* itemAttaPower;		// 아이템의 공격력
	char (*itemImage)
}Item;

void SetItem(Item* itemptr);