#include "ConsoleGame.h"

void GotoXY(int x, int y)	// 콘솔 창에 x y 좌표로 커서의 위치를 이동시킨다. 
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ShowStage(char(*Stage)[STAGE_WIDTH + 1], COORD pos)
{
	for (int i = 0; i < STAGE_HEIGHT; i++)
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

char ReturnValueFromStage(char(*Stage)[STAGE_WIDTH + 1], COORD pos)
{
	char returnValue = ' ';

	returnValue = Stage[pos.X][pos.Y];

	return returnValue;
}

BOOL CanMoveStage(char(*Stage)[STAGE_WIDTH + 1], COORD playerPos, char exitCharacter)
{
	char stageChar = ReturnValueFromStage(Stage, playerPos);

	if (stageChar == exitCharacter)
	{
		printf("다음 스테이지로 이동합니다!\n");	// 특정 위치에 도달하면 true를 반환한다.
	
		return true;
	}
	else
	{
		printf("넘어갈 수 없습니다.\n");			// 도달하지 못하면 false를 반환한다.
		return false;
	}
	
}

void NextStage(char(*Stage)[STAGE_WIDTH + 1], COORD stagePos)
{

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
