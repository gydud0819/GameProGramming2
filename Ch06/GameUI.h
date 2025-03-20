#pragma once

#include <stdio.h>		// printf, scanf_s
#include <Windows.h>	// 콘솔 관련 함수
#include <time.h>		// time 함수
#include <stdlib.h>		// srand rand 함수
#include <conio.h>		// getch 함수
#include <stdbool.h>	// true, false 사용 가능
#include "StructPointer.h"

/*
* 아이템의 구조체
* 아이템의 이름
* 아이템의 좌표
* 아이템의 레벨
* 아이템의 공격력 (강화 보너스)
*/


typedef struct _ITEM
{
	char* ItemName;
	POS ItemPos;
	int* ItemPower;		// 아이템 공격력
	int* ItemLv;		// 아이템 레벨

}ITEM;

// 아이템의 좌표, 플레이어의 좌표를 비교해서 아이템의 x와 플레이어 x를 비교하고 
// y도 각각 비교하여 일치하면 아이템을 획득했다라고 UI 띄우기

void GameStart();

void InputPlayerKey(Player* playerptr, ITEM* itemptr);

void GotoXY(int x, int y);	// 실수할 가능성이 적다.

//void GotoXY2(int x, int y);	// x만 사용할 수도 있다. 

void ShowPlayerInfo(const Player* playerptr);	// 플레이어 정보 나타내는 함수

void ShowItemInfo(const ITEM* itemptr);			// 아이템 정보 나타내는 함수