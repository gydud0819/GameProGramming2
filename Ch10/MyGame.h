#pragma once

#include "ConsoleGame.h"

// GetAsync 키로 이동하는 것 구현하기

// Item.h
// Item 2차원 배열을 가져와서 특정 좌표에 출력하기

// GotoXY

// 특정 좌표에 이미지 출력하기

// 특별한 이벤트 발생시 아이템 정보를 출력하는 함수 구현해보기 

// 문자를 입력받아서 조건문으로 비교를 하고 이벤트를 실행하기 scanf_s, _getch

// 특정 아이템을 획득하면 메뉴 키를 통해서 획득한 아이템의 정보를 확인한다. 

typedef struct PLAYER
{
	int PosX;
	int PosY;
}Player;

void GetPlayerKeyInput(Player* playerptr, COORD pos);