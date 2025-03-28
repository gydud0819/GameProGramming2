#include "ConsoleGame.h"

void GotoXY(int x, int y)	// �ܼ� â�� x y ��ǥ�� Ŀ���� ��ġ�� �̵���Ų��. 
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ShowStage(char(*Stage)[STAGE_WIDTH2 + 1], COORD pos)
{
	for (int i = 0; i < STAGE_HEIGHT2; i++)
	{
		GotoXY(pos.X, pos.Y + i);	// pos ���� x y ��ǥ�� �̵����Ѷ�� �ǹ�.
		printf("%s", Stage[i]);
	}

	
	//GotoXY(pos.X, pos.Y);	// pos ���� x y ��ǥ�� �̵����Ѷ�� �ǹ�.
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
		//printf("���� ���������� �̵��մϴ�!\n");	 // Ư�� ��ġ�� �����ϸ� true�� ��ȯ�Ѵ�.
		return true;
	}
	else
	{
		//GotoXY(80, 2);							// ��ǥ�� �̿��� UI ������ �ؼ� ��� ���� �ִ�. 
		//printf("�Ѿ �� �����ϴ�.\n");			// �������� ���ϸ� false�� ��ȯ�Ѵ�.
		return false;
	}
	
}

void NextStage(char(*Stage)[STAGE_WIDTH2 + 1], COORD stagePos)
{
	printf("���� ���������� �Ѿ�ϴ�.\n");

	// �ܼ� â�� �����ش�.
	system("cls");
	// ���� ���������� ��ǥ�� �̿��� �׷��ش�.
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
