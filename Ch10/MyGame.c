#include "MyGame.h"

void GameStart()
{
	// player�� �������ֱ�	- �̸�, ����, ��ǥ
	
	Player player;
	COORD playerPos = { 10,10 };
	//COORD originPos = { 10,10 };
	SetPlayer(&player);

	// �������� ���
	COORD stagePos = { 10,0 };
	ShowStage(stage3, stagePos);

	player.pos = plusPos(playerPos, stagePos);		// �������� ��ǥ�� �÷��̾� ��ǥ�� ���� �÷��̾� ��ġ�� �ű�ڴٴ� �ǹ�.

	// �ݺ��ؼ� ����Ǵ� ���� ���� UI ���, �÷��̾� ����
	// ShowPlayerInfo(&player);

	COORD Player_UI_Pos = { 80,0 };

	while (true)
	{
		// 1. �÷��̾� �̵� ����
		GotoXY(player.pos.X, player.pos.Y);
		printf("  ");	// �÷��̾ �����ִ� ��

		SetPlayerInput(&player);
		GotoXY(player.pos.X, player.pos.Y);
		printf("��");	// �÷��̾ �ٽ� �׷��ش�.

		COORD playerStagePos = { player.pos.X - stagePos.X, player.pos.Y - stagePos.Y };	// ��ġ�� �ű���� �÷��̾� ��ǥ���� �������� ��ǥ�� ���� ������Ѵ�.

		// 2. stage�� Ư���� ���ڿ� ���� ������ ���� ���������� �̵��ϴ� �� ����
		if (CanMoveStage(stage3, playerStagePos, '&'))
		{
			NextStage(stage4, stagePos);
			player.pos = plusPos(playerPos, stagePos);		// ���������� �̵����� �� ��� �����Ұ��� ���� �ڵ�.
		}

		// 3. �÷��̾��� ���� ����ϱ�
		ShowPlayerInfo(&player, Player_UI_Pos);

		Sleep(100);
	}
}

int main()
{
	//printf("�ְܼ��� �����");
	GameStart();
}