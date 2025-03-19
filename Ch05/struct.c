#include "struct.h"

void StructExample()
{
	// �÷��̾��� ������ ������. (1. �÷��̾��� ��ġ��)

	struct Pos playerPos = { 1,1 };
	
	// �÷��̾��� ��ǥ�� ������ּ���.
	// ���� ������(.) - ������ �����Ϳ� ������ �� �ִ�.

	printf("[%d, %d]\n", playerPos.PosX, playerPos.PosY);

	Pos origin1 = { 0,0 };
	struct Circle MyCircle = { origin1, 2.5 };

	printf("���� : [%d, %d], ������ : %1f\n", MyCircle.origin.PosX, MyCircle.origin.PosY, MyCircle.radius);

	ClaculateCircleInfo(MyCircle);

	char playerName[10] = "player01";
	//Player myPlayer = {};
	//ShowPlayerCurrentPos();
}

void ClaculateCircleInfo(Circle circle)
{
	// ȣ�� ���� : 2 * PI & R
	printf("ȣ�� ���� : %1f\n", 2 * 3.14 * circle.radius);
	printf("���� ���� : %1f\n", 0.5 * 3.14 * circle.radius * circle.radius);
	printf("������ ��ġ : [%d, %d]\n", circle.origin.PosX, circle.origin.PosY);
}

void ShowPlayerCurrentPos(Player player)	// �÷��̾��� ���� ��ġ�� �����ִ� �Լ�
{
	struct player *playerName = "player01";
	// �÷��̾��� �̸�
	printf("�÷��̾��� �̸� : %s", player.playerName);
	// �÷��̾��� ��ġ
	printf("�÷��̾��� ���� ��ġ : [%d, %d]", player.playerPos.PosX, player.playerPos.PosY);
}
