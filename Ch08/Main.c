/*
* �ۼ���	: 2025-03-24
* �ۼ���	: ��ȿ��
* ����	: ���ڿ��� ����
*/

/*
* ���ڿ� : �迭�� �̷���� ����
* string : char(actar) array
*/

#include "Mystring.h"
#include "Player.h"

/*
* " " - ���ڿ��� �迭
* " " ���� + 1 ũ�Ⱑ �����Ǿ� �ִ�.
* "apple"	a, p, p, l, e, '\0' ���ڿ��� ���Ḧ �ǹ��Ѵ�.
* "apple is"	/ 01010101010101�� ���� / ���ڿ��� ���� �˷��ֱ� ���ؼ� '\0'
*/

#define STAGE_HEIGHT 5
#define STAGE_WIDTH 6

// ������ ���̰� �� ũ�� ����� �̻��ϰ� ��µȴ�.

char stage1[STAGE_HEIGHT][STAGE_WIDTH + 1] =
{
	"######",		// char �迭
	"#    #",		// char �迭
	"#    #",		// char �迭
	"#    #",		// char �迭
	"######",		// char �迭
	
};

char stage2[STAGE_HEIGHT][STAGE_WIDTH + 1] =
{
	"######",	// char �迭
	"#    #",
	"######",
	"#    #",
	"######",
};


int main()
{
	//arrayExample();

	// ���ڿ�(������ �迭) �迭�� �̸��� �ּ�

	// �迭 - ������
	// �迭 �������� �ּҸ� �����ϸ� �ȵȴ�.

	/*char* playerName[10];

	SetPlayerName(playerName);*/

	//printf("%s", playerName);

	// 1. ���� ����

	// �÷��� �� ĳ������ �̸��� �����Ѵ�.				SetPlayerName
	// char* �� ������ �ؼ� ���� �� �����͸� ȣ���Ѵ�.	ShowPlayerInfo

	// �÷��̾� �ڵ�

	Player player;
	Player* playerptr = &player;
	char inputA[10] = "";

	printf("�÷��̾��� �̸��� �Է����ּ���.\n");
	scanf_s("%s", inputA, 10);
	SetPlayer(&player, inputA);
	ShowPlayerInfo(&player);

	// 2���� �迭

	printf("\n");
	printf("�� ���\n");

	// ����x1�� ����xn�� ���

	for (int i = 0; i < STAGE_HEIGHT; i++)
	{
		//printf("%s\n", stage1[i]);	// ���� 2���� ������� ������ ȣ���ϰ� ���� ���� ȣ���ϸ� �ȴ�.
		printf("%s\n", stage2[i]);
	}

}