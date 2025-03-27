/*
* 작성일	: 2025-03-26
* 작성자	: 박효영	
* 주제	: 콘솔 게임 만들기
*/

/*
* 콘솔 게임 만들기
* 
* 지금 까지 배운 것
* 2차원 배열, 구조체, 포인터
* 
* 1. 스테이지를 만들고 특정 위치에 도달하면 다음 스테이지로 이동한다.
* 2. 콘솔 화면 위에 UI를 출력해주는 기능을 함수로 구현한다.
*/

#pragma once

#include <stdio.h>		// printf, scanf_s 함수
#include <stdlib.h>		// rand 함수
#include <stdbool.h>	// bool 함수
#include <Windows.h>	// GetAsyc, system("cls");
#include <time.h>		// 시간 변수 
#include <conio.h>		// _getch() 입력 대기 함수
#include "Stage.h"

//typedef struct _POS
//{
//	int x;
//	int y;
//}POS;

void GotoXY(int x, int y);
// 2차원 배열을 주소로 가져오려면 어떤 형태로 선언해야 할까?
// char (*Stage)[가로의 길이]
void ShowStage(char (*Stage)[STAGE_WIDTH +1], COORD pos);


// 플레이어의 좌표, stage 안의 문자값(&)

char ReturnValueFromStage(char(*Stage)[STAGE_WIDTH + 1], COORD pos); // x y 좌표에 들어있는 문자를 반환하는 함수

char ReturnValueFromStruct(char(*Stage)[STAGE_WIDTH + 1], COORD pos);

// 다음 스테이지로 이동이 가능한지 물어보는 함수
BOOL CanMoveStage(char(*Stage)[STAGE_WIDTH + 1], COORD playerPos, char exitCharacter);

// 다음 스테이지로 넘어가라는 함수
void NextStage(char(*Stage)[STAGE_WIDTH + 1], COORD stagePos);

COORD plusPos(COORD pos1, COORD pos2);

//typedef struct _PLAYER
//{
//	int playerX;
//	int playerY;
//
//}Player;

//int playerX;
//int playerY;

//void GetPlayerKeyInput(COORD pos);	// 입력받아라. 플레이어 입력 키를