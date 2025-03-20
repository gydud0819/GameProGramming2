#pragma once

#include <stdio.h>
#include <Windows.h>

// 플레이어 - 이름, 좌표, 소유한 아이템 구현해보기

typedef struct _POS
{
	int posX;
	int posY;
}POS;


typedef struct _Player
{
	char* playerName;	// "홍길동" "홍"의 좌표? 주소?만 가져와서 이름을 저장한다.
	POS playerPos;		// 좌표를 변수로 선언할건지 주소로 선언할건지에 따라 결과가 달라진다.

}Player;

void Ch6Example();

void ShowPlayerInfo1(Player player);

void ShowPlayerInfo2(const Player* playerptr); // 포인터로 사용

void ShowPlayerInfo3(const Player* playerptr);	// 포인터로 사용

void ChangePlayerPos(Player* playerptr);