#include "MyGame.h"

void GameStart()
{
	// player를 설정해주기	- 이름, 종족, 좌표
	
	Player player;
	COORD playerPos = { 10,10 };
	//COORD originPos = { 10,10 };
	SetPlayer(&player);

	// 스테이지 출력
	COORD stagePos = { 10,0 };
	ShowStage(stage3, stagePos);

	player.pos = plusPos(playerPos, stagePos);		// 스테이지 좌표와 플레이어 좌표를 더해 플레이어 위치를 옮기겠다는 의미.

	// 반복해서 실행되는 게임 로직 UI 출력, 플레이어 조작
	// ShowPlayerInfo(&player);

	COORD Player_UI_Pos = { 80,0 };

	while (true)
	{
		// 1. 플레이어 이동 구현
		GotoXY(player.pos.X, player.pos.Y);
		printf("  ");	// 플레이어를 지워주는 것

		SetPlayerInput(&player);
		GotoXY(player.pos.X, player.pos.Y);
		printf("■");	// 플레이어를 다시 그려준다.

		COORD playerStagePos = { player.pos.X - stagePos.X, player.pos.Y - stagePos.Y };	// 위치를 옮기려면 플레이어 좌표에서 스테이지 좌표를 각각 빼줘야한다.

		// 2. stage에 특별한 문자와 값이 같으면 다음 스테이지로 이동하는 것 구현
		if (CanMoveStage(stage3, playerStagePos, '&'))
		{
			NextStage(stage4, stagePos);
			player.pos = plusPos(playerPos, stagePos);		// 스테이지를 이동했을 때 어디서 시작할건지 쓰는 코드.
		}

		// 3. 플레이어의 정보 출력하기
		ShowPlayerInfo(&player, Player_UI_Pos);

		Sleep(100);
	}
}

int main()
{
	//printf("콘솔게임 만들기");
	GameStart();
}