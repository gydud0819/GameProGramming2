#pragma once

#include <stdio.h>
#include <Windows.h>	// 콘솔 관련 함수
#include <time.h>		// time 함수
#include <stdlib.h>		// srand rand 함수
#include <conio.h>		// getch 함수
#include <stdbool.h>	// true, false 사용 가능

typedef struct _Player	// 플레이어 구조체
{
	char* playerName;
	COORD pos;
	
}Player;

typedef struct _Item    // 아이템 구조체
{
	char* itemName;
	COORD pos;
	bool hasItem;		// 아이템을 가지고 있는지 확인하고 있으면 true로 반환한다.
	// 이미지 를 가져올 수 도 있다.
}Item;

// 구조체 stage -> 2차원 배열로 구현한다. 

void PlayerInputKey(Player* playerptr);		// 플레이어가 키를 받아 움직이게 하는 함수
void ShowPlayer(const Player* playerptr);	// 플레이어를 보여주는 함수

void InteractWithItem(Player* playerptr, Item* itemptr);	// 아이템을 포함하는지 확인하는 함수
void ShowplayerItemInfo(Item* itemptr);	// 아이템과 플레이어의 정보를 나타내는 함수	// 주소로 가져옴
void ShowAllPlayerItemInfo(Item itemArray[], int length);

void ShowAllItem(Item itemArray[], int length);

void GotoXY2(int posX, int posY);		// 좌표 이동 함수
void MoveXY2(COORD pos);				// 특정 좌표로 이동하라는 함수 // 선언하는 인자가 다르면 함수 이름을 같게 쓸 수 있다. (C++부터)

// 두 개의 좌표를 매개변수로 받아와서 같은지 비교하는 함수
BOOL ComPareCOORD(COORD pos1, COORD pos2);	// 같으면 true 다르면 false 반환