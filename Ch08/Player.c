#include "Player.h"

// 1. ���� �ּҷ� ����
// 2. ����ü -> ���� �ּ� ����

/*
* string.h
* 
* strcpy_s
*/

void SetPlayerName(char* playerNameptr)
{
	printf("����� �̸��� �Է����ּ���.\n");
	
	char input[20];

	scanf_s("%s", input, 20);

	strcpy_s(playerNameptr, 20, input);	// ����� ���ڿ��� �ּ�, ������ ���ڿ��� �ּ� 

}

void SetPlayer(Player* player, const char* Name)
{
	// ���� ó��
	// ����ϴ� ����� �Ǽ��ϴ� ���� �����Ѵ�.
	if (player == NULL)
	{
		printf("[���] �÷��̾ �ּҸ� �Է����ּ���.\n");
		return;
	}

	strcpy_s(player->playerName, NAMELENGTH, Name);

}

void ShowPlayerInfo(Player* player)
{
	printf("�÷��̾��� �̸� : %s", player->playerName);
}
