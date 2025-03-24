#pragma once

#include <stdio.h>
#include <string.h>

#define NAMELENGTH 50

/*
* 구조체
* player
* char name[20] (이름의 최대 길이)
*/

typedef struct _Player
{
	char playerName[NAMELENGTH];
}Player;

void SetPlayerName(char* playerNameptr);	// 플레이어 이름을 정해주는 함수 (주소를 전달해줘야 한다.)

void SetPlayer(Player* player, const char* Name);

void ShowPlayerInfo(Player* player);
