#pragma once

#include "ConsoleGame.h"

/*
* 열거형
* enum 이름;
* 이름을 나열한다. 숫자에 이름을 적용시킨다. ex) const double PI = 3.14; => 심볼릭 상수 
* 
* 이유: ex. const int ONE; TWO; THREE; => 아이템의 번호
*/



// 숫자의 자리수를 이용해서 성질을 표현한다.
// 00 0000 0000		(식별번호)(데이터 성질)(인덱스 번호)

typedef enum _COLOR
{
	RED,
	GREEN,
	BLUE

}Color, COLOR;

typedef enum _RACE
{
	HUMAN, ORC, TROLL
}Race;

typedef struct _Player
{
	char* name;		// 이름을 가져오기 위해 변수로 설정한다.
	COORD pos;		// 플레이어의 좌표를 변경하는 함수
	Race race;		// 플레이어가 선택한 종족
}Player;

void GetPlayerName(Player player);		// 플레이어 이름을 가져오는 함수
void SetPlayerName(Player* playerptr);	// 플레이어 이름을 보여주는 함수
void SetPlayerInput(Player* playerptr);
void SetPlayerRace(Player* playerptr);

void SetPlayer(Player* playerptr);

void SelectColor(Color color);

//void GetPlayerRace();

void ShowPlayerInfo(Player* playerptr, COORD UIPos);