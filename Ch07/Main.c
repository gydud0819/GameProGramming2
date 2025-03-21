/*
* 작성일	: 2025-03-21
* 작성자	: 박효영
* 주제	: 구조체로 게임 만들기
*/

/*
* 지금까지 배운 것
* 포인터 - 주소를 이용할 수 있게 되었다.
* 1. 포인터 변수 선언하는 법				int* numptr;
* 2. 변수로부터 주소를 호출하는 법			int* num = &num;
* 3. 주소에서 값을 참조하는 방법				*numptr;
*/

/*
* 포인터와 연산자
* 포인터의 덧셈 결과 : 자료형의 크기만큼 증가한다.
* 배열		: (포인터 주소 + i) i번째 주소를 호출하는 것이 배열
*/

/*
* 구조체
* 구조체 : 사용자가 직접 정의하는 자료형 (자기만의 자료형)
*/

/*
* 오늘 목표
* 게임에 사용할 함수 구현하기
* 플레이어, 아이템, 몬스터 만들기
*/

/*
* 1. 플레이어 이동 구현하기
* 2. 상호작용 구현하기
*/

#include "Player.h"

int main()
{
	// 플레이어의 기본 데이터 설정하기 ( 함수로 만들어서 간단하게 하기. 추후에 할 예정이다.)
	
	COORD playerpos = { 0,0 };
	Player player = { "플레이어", playerpos };	// 이름, 좌표

	COORD itemAPos = { 10,20 };
	Item itemA = { "아이템A", itemAPos, false};	// 이름, 좌표, 획득 여부

	COORD itemBpos = { 5,20 };
	Item itemB = { "아이템B", itemAPos, false};	// 이름, 좌표, 획득 여부

	Item AllItem[2] = { itemA, itemB };			// 아이템 배열을 가져와서 사용하는 함수 만들기

	while (true)
	{
		system("cls");

		PlayerInputKey(&player);

		ShowPlayer(&player);

		MoveXY2(itemAPos);
		printf("◎");

		InteractWithItem(&player, &itemA);		// 주소에 데이터가 변경되지 않았다. -> Call by Value, Reference
		ShowplayerItemInfo(&itemA);
		//ShowAllPlayerItemInfo(AllItem, 2);

		// 배열을 매개변수로 받아와서 각각의 데이터에 접근한다.

		Sleep(100);
	}
	
}