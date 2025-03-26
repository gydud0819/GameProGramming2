#include "ConsoleGame.h"
#include "Stage.h"

/*
* stage1에 탈출구를 만들고 탈출구 위치에 플레이어가 도달하면, 현재 화면을 지우고  stage2로 넘어가도록 만들기
*/

int main()
{
	/*for (int i = 0; i < STAGE_HEIGHT; i++)
	{
		printf("%s\n", stage2[i]);
	}*/
	COORD stagePos = { 10,0 };
	ShowStage(stage1, stagePos);

	COORD stagePos2 = { 40,0 };
	ShowStage(stage2, stagePos2);

	GotoXY(10, 10);		// 플레이어 위치를 표현해준다.
	printf("■");

	COORD tempPos = {2,19};
	char tempChar = ReturnValueFromStage(stage1, tempPos);
	printf("스테이지의 특정 좌표 문자 값 : %c\n", tempChar);

	//GotoXY(5, 19);		// 탈출구 위치.

	if (CanMoveStage(stage1, tempPos, '&'))
	{
		system("cls");							// 전체 화면을 지워준다.
		ShowStage(stage2, stagePos2);			// 다음 스테이지를 보여준다.
		GotoXY(10 + 40, 10);					// 플레이어를 다음 스테이지에 나타낸다.
		printf("■");							// 플레이어 문자를 출력한다. 
	}

	// 플레이어의 위치를 이동
	while (true)
	{

	}
}