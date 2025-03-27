#include "ConsoleGame.h"
#include "Stage.h"
#include "Player.h"

/*
* stage1�� Ż�ⱸ�� ����� Ż�ⱸ ��ġ�� �÷��̾ �����ϸ�, ���� ȭ���� �����  stage2�� �Ѿ���� �����
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

	GotoXY(10, 10);		// �÷��̾� ��ġ�� ǥ�����ش�.
	printf("��");

	COORD tempPos = {2,19};
	char tempChar = ReturnValueFromStage(stage1, tempPos);
	printf("���������� Ư�� ��ǥ ���� �� : %c\n", tempChar);

	//GotoXY(5, 19);		// Ż�ⱸ ��ġ.

	// �÷��̾� ����ü �Լ� ���
	Player player;

	SetPlayerName(&player);
	GetPlayerName(player);

	// enum ����
	//system("cls");
	Color color = RED;
	SelectColor(color);

	ShowPlayerInfo(&player);

	if (CanMoveStage(stage1, tempPos, '&'))
	{
		system("cls");							// ��ü ȭ���� �����ش�.
		ShowStage(stage2, stagePos2);			// ���� ���������� �����ش�.
		GotoXY(10 + 40, 10);					// �÷��̾ ���� ���������� ��Ÿ����.
		printf("��");							// �÷��̾� ���ڸ� ����Ѵ�. 
	}

	// �÷��̾��� ��ġ�� �̵�
	while (true)
	{

	}
}