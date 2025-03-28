#include "ConsoleGame.h"

void GotoXY(int x, int y)	// 콘솔 창에 x y 좌표로 커서의 위치를 이동시킨다. 
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ShowStage(char(*Stage)[STAGE_WIDTH2 + 1], COORD pos)
{
	for (int i = 0; i < STAGE_HEIGHT2; i++)
	{
		GotoXY(pos.X, pos.Y + i);	// pos 안의 x y 좌표로 이동시켜라는 의미.
		printf("%s", Stage[i]);
	}

	
	//GotoXY(pos.X, pos.Y);	// pos 안의 x y 좌표로 이동시켜라는 의미.
	//printf("%s", Stage[0]);
	//GotoXY(pos.X, pos.Y + 1);
	//printf("%s", Stage[1]);
	//GotoXY(pos.X, pos.Y + 2);
	//printf("%s", Stage[2]);

}

char ReturnValueFromStage(char(*Stage)[STAGE_WIDTH2 + 1], COORD pos)
{
	char returnValue = ' ';

	returnValue = Stage[pos.X][pos.Y];

	return returnValue;
}

BOOL CanMoveStage(char(*Stage)[STAGE_WIDTH2 + 1], COORD playerPos, char exitCharacter)
{
	char stageChar = ReturnValueFromStage(Stage, playerPos);

	if (stageChar == exitCharacter)
	{
		//GotoXY(80, 0);
		//printf("다음 스테이지로 이동합니다!\n");	 // 특정 위치에 도달하면 true를 반환한다.
		return true;
	}
	else
	{
		//GotoXY(80, 2);							// 좌표를 이용해 UI 설정을 해서 띄울 수도 있다. 
		//printf("넘어갈 수 없습니다.\n");			// 도달하지 못하면 false를 반환한다.
		return false;
	}
	
}

void NextStage(char(*Stage)[STAGE_WIDTH2 + 1], COORD stagePos)
{
	printf("다음 스테이지로 넘어갑니다.\n");

	// 콘솔 창을 지워준다.
	system("cls");
	// 다음 스테이지를 좌표를 이용해 그려준다.
	ShowStage(stage4, stagePos);

	/*COORD stagePos2 = { 40,0 };
	ShowStage(stage2, stagePos2);

	COORD tempPos = { 1,1 };*/

	
}

COORD plusPos(COORD pos1, COORD pos2)
{
	SHORT newPosX = pos1.X + pos2.X;
	SHORT newPosY = + pos1.Y + pos2.Y;

	COORD resultPos = { newPosX, newPosY };
	
	return resultPos;
}

//void GetPlayerKeyInput(COORD pos)
//{
//	if (_kbhit())
//	{
//		if (GetAsyncKeyState(VK_LEFT))
//		{
//			playerX--;
//		}
//	}
//}
