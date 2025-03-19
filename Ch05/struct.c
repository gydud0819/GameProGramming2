#include "struct.h"

void StructExample()
{
	// �÷��̾��� ������ ������. (1. �÷��̾��� ��ġ��)

	struct Pos playerPos = { 1,1 };
	
	// �÷��̾��� ��ǥ�� ������ּ���.
	// ���� ������(.) - ������ �����Ϳ� ������ �� �ִ�.
	printf("�÷��̾��� ��ǥ ��ġ\n");
	printf("�÷��̾��� ��ǥ: [%d, %d]\n", playerPos.PosX, playerPos.PosY);

	printf("=================================================\n");

	Pos origin1 = { 0,0 };
	struct Circle MyCircle = { origin1, 2.5 };

	printf("���� : [%d, %d], ������ : %1f\n", MyCircle.origin.PosX, MyCircle.origin.PosY, MyCircle.radius);

	ClaculateCircleInfo(MyCircle);

	printf("=================================================\n");

	char playerName[10] = "��¥��";	// �÷��̾� �̸�
	int playerBasicLv = 1;			// �÷��̾��� �⺻ ����
	int ItemLv = 5;					// �������� �⺻ ����
	int ItemPower = 7;				// �������� ���ݷ�
	char ItemName[10] = "���Į";	// �������� �̸�

	int* playerBasicLvptr = &playerBasicLv;
	int* ItemLvptr = &ItemLv;
	int* ItemPowerptr = &ItemPower;

/*	int* playerBasicLv = &playerBasicLv; 
	int* ItemLv = &ItemLv;               
	int* ItemPower = &ItemPower;  */       

	// ��������̳� ���ο��� ����ü�� ����� ���ο��ٰ� ������ �� ������ ����ü�� ����ü���� �� ����Ѵ�!
	// ������� ������ ����ü �� ����� ���ο��� ���� ����ü �� ������ ������ ��� ��ġ�ؾ��Ѵ�. (�ſ� �߿�)
	Player myPlayer = { playerName, 0,0, &playerBasicLv, ItemName, &ItemLv , &ItemPower };

	ShowPlayerCurrentPos(myPlayer);
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
	// �÷��̾��� �̸�
	printf("�÷��̾��� �̸� : %s\n", player.playerName);
	// �÷��̾��� ��ġ
	printf("�÷��̾��� ���� ��ġ : [%d, %d]\n", player.playerPos.PosX, player.playerPos.PosY);
	// ���۽� �÷��̾��� �⺻ ����
	printf("�÷��̾��� �⺻ ���� : %dLv\n", *player.playerBasicLv);
	// ������ �̸�
	printf("�������� �̸� : %s\n", player.ItemName);
	// �������� �⺻ ����
	printf("�������� ���� : %dLv\n", *player.ItemLv);
	// �������� ���ݷ�
	printf("�������� ���ݷ�: %d\n", *player.ItemPower);
}
