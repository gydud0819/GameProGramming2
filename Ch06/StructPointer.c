#include "StructPointer.h"	// Ȯ���� ������ ��������� �ǹ�

void Ch6Example()
{
	printf("ch6");

	POS playerPos = { 5,5 };
	playerPos.posX = 3;
	playerPos.posY = 4;

	Player player1 = { "SSS", playerPos };

	//printf("�÷��̾��� �̸� : %s, �÷��̾��� ���� ��ġ : [%d, %d]", player1.PlayerName, player1.playerPos, 
	//	player1.playerPos.posX, player1.playerPos.posY);

	//ShowPlayerInfo1(player1);	// ������ �״�� ����

	//ShowPlayerInfo2(&player1);	// �ּҸ� ����
	
	ChangePlayerPos(&player1);
	ShowPlayerInfo3(&player1);	// �ּҸ� ����

}

void ShowPlayerInfo1(Player player1)	// ������ �ۼ��� ����ü �ڵ�
{
	printf("�÷��̾��� �̸� : %s, �÷��̾��� ���� ��ġ : [%d, %d]", 
		player1.playerName, player1.playerPos.posX, player1.playerPos.posY);
}

void ShowPlayerInfo2(const Player* playerptr)	// �� ȿ������ �ڵ��̴�.
{
	printf("�÷��̾��� �̸� : %s, �÷��̾��� ���� ��ġ : [%d, %d]",
		(*playerptr).playerName, (*playerptr).playerPos.posX, (*playerptr).playerPos.posY);
	(*playerptr).playerName;	// const ������ �߱� ������ ()�� �ٿ���� �Ѵ�.
}

void ShowPlayerInfo3(const Player* playerptr)
{
	printf("�÷��̾��� �̸� : %s, �÷��̾��� ���� ��ġ : [%d, %d]",
		playerptr->playerName, playerptr->playerPos.posX, playerptr->playerPos.posY);
	playerptr->playerName;
}

void ChangePlayerPos(Player* playerptr)
{
	playerptr->playerPos.posX += 1;
	playerptr->playerPos.posY += 1;
}
