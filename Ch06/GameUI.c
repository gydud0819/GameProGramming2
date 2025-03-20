#include "GameUI.h"
#pragma once

/*
* 구현 목표 : 플레이어의 좌표를 키보드로부터 입력받아 실행되는 함수 만들기
* 
* 1. 플레이어 좌표 정의 - 구조체로 정의
* 2. 키보드로 입력받는 함수 만들기 - 플레이어의 좌표를 매개 변수로 받는 함수 ex) Player*
* 3. 커서 위치를 변경해서 UI를 출력하기
*/

void GameStart()
{
	// 플레이어의 정보를 입력
	POS playerPos = { 0,0 };	// 플레이어 시작 좌표
	Player MyPlayer = { "이재준", playerPos };

	POS ItemPos = { 17,23 };	// 아이템 좌표
	ITEM Item = { "삐에로", ItemPos };

	int* ItemLv = 1;
	//int* ItemPower=

	int* ItemLvptr = &ItemLv;

	while (true)
	{
		// 1. 유저의 입력을 받는다.
		// 2. 변경된 정보를 화면에 출력한다.
		// 3. Sleep(100);

		InputPlayerKey(&MyPlayer);
		ShowPlayerInfo(&MyPlayer);

		Sleep(100);
	}
}

void InputPlayerKey(Player* playerptr)
{
	system("cls");

	if (_kbhit())	// 키보드를ㄹ 입력받을 때 true, false 반환
	{
		if (GetAsyncKeyState(VK_LEFT))// 키보드의 입력키 x좌표를 1
		{
			playerptr->playerPos.posX -= 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			playerptr->playerPos.posX += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			playerptr->playerPos.posY -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			playerptr->playerPos.posY += 1;
		}
	}
}

void GotoXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ShowPlayerInfo(const Player* playerptr)
{
	GotoXY(50, 1);			// x 오른쪽 50, y 아래로 1
	printf("플레이어의 정보");

	GotoXY(50, 3);			// x 오른쪽 50, y 아래로 3
	printf("플레이어의 이름 : %s", playerptr->playerName);
	
	GotoXY(50, 5);			// x 오른쪽 50, y 아래로 5
	printf("플레이어의 위치 : [%d, %d]", playerptr->playerPos.posX, playerptr->playerPos.posY);
	
	GotoXY(playerptr->playerPos.posX, playerptr->playerPos.posY);			// x 오른쪽 50, y 아래로 5
	printf("◎");
}
