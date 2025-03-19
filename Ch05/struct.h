/*
* 목표 : 아이템을 직접 정의해서 사용한다.
* 정수, 실수, 문자를 표현하는 방법 C언어 - C언어 수업때 배운 내용
* 아이템 구현 : 이름, 수량, 타입, 번호		#define ITEMCOUNT 5; <- 사용 
* 
* 아이템들이 많이 존재하지만 하나의 배열로 모든 아이템을 표현할 수 있다. 
* 아이템을 정의해서 정의한 데이터를 배열로 표현했다. 
*/

/* 
* 구조체
* Struct : 사용자가 직접 정의한 자료형
* 왜 데이터를 직접 정의할까? (Why)
*/

/*
* 2차원 좌표 : int x좌표, int y좌표
* int x;
* int y;
* (1, 0);
* 항상 2개의 좌표로 이루어져있다. 사용자가 직접 좌표를 의미하는 자료형을 만들 수는 없을까? 
*/

/*
* 구조체 사용형식
* 
* struct 이름
* {
*	int PosX;
*	int PosY;
* };
* 
* 1. 구조체 표현 방법 : struct 이름 { };
* 2. 구조체 안에 구조체를 넣을 수 있을까?		ex) 원 : 원점, 반지름 - 원의 넓이, 호의 길이를 알 수 있다. 
*/

#pragma once
#include <stdio.h>
#include <stdbool.h>

typedef struct Pos		// 구조체를 이용하여 자료형 만들기
{
	int PosX;
	int PosY;
}Pos;

/*
* 구조체를 선언할 때 마다 struct 키워드를 붙여주는 것이 번거로울 때
* typedef를 사용하면 ~ 타입의 이름을  {} 타입 재정의 할 수 있다.
* typedef struct 타입의 이름을 생략할 수 있다. 
* 만약 struct 타입의 이름을 생략하면 struct 이름의 형태로는 사용을 할 수 없다.
*/

/*
* 구조체를 이용해서 함수를 만드는 것
*/

typedef struct Circle		// 원점과 반지름으로 구성된 도형이다. -> 원의 넓이와 호의 길이를 구할 수 있다. 
{
	Pos origin;
	double radius;
}Circle;

void StructExample();

void ClaculateCircleInfo(Circle circle);

// 플레이어의 좌표를 이용해 플레이어의 정보를 출력하는 함수 만들기 
typedef struct MyPlayer
{
	char* playerName;		// 플레이어 이름
	// 1. 좌표
	Pos playerPos;			// 플레이어 좌표
	// 2. 스텟
	int* playerBasicLv;		// 플레이어의 기본 레벨
	// 3. 아이템
	char* ItemName;			// 아이템 이름
	int* ItemLv;			// 아이템의 레벨
	int* ItemPower;			// 아이템의 공격력
}Player;

void ShowPlayerCurrentPos(Player player);	// 플레이어의 현재 위치를 보여주는 함수 

//void MovePlayer(Player player);

//void ShowPlayerCurrentPos2(const Player* player);

