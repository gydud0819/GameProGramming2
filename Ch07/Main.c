/*
* �ۼ���	: 2025-03-21
* �ۼ���	: ��ȿ��
* ����	: ����ü�� ���� �����
*/

/*
* ���ݱ��� ��� ��
* ������ - �ּҸ� �̿��� �� �ְ� �Ǿ���.
* 1. ������ ���� �����ϴ� ��				int* numptr;
* 2. �����κ��� �ּҸ� ȣ���ϴ� ��			int* num = &num;
* 3. �ּҿ��� ���� �����ϴ� ���				*numptr;
*/

/*
* �����Ϳ� ������
* �������� ���� ��� : �ڷ����� ũ�⸸ŭ �����Ѵ�.
* �迭		: (������ �ּ� + i) i��° �ּҸ� ȣ���ϴ� ���� �迭
*/

/*
* ����ü
* ����ü : ����ڰ� ���� �����ϴ� �ڷ��� (�ڱ⸸�� �ڷ���)
*/

/*
* ���� ��ǥ
* ���ӿ� ����� �Լ� �����ϱ�
* �÷��̾�, ������, ���� �����
*/

/*
* 1. �÷��̾� �̵� �����ϱ�
* 2. ��ȣ�ۿ� �����ϱ�
*/

#include "Player.h"

int main()
{
	// �÷��̾��� �⺻ ������ �����ϱ� ( �Լ��� ���� �����ϰ� �ϱ�. ���Ŀ� �� �����̴�.)
	
	COORD playerpos = { 0,0 };
	Player player = { "�÷��̾�", playerpos };	// �̸�, ��ǥ

	COORD itemAPos = { 10,20 };
	Item itemA = { "������A", itemAPos, false};	// �̸�, ��ǥ, ȹ�� ����

	COORD itemBpos = { 5,20 };
	Item itemB = { "������B", itemAPos, false};	// �̸�, ��ǥ, ȹ�� ����

	Item AllItem[2] = { itemA, itemB };			// ������ �迭�� �����ͼ� ����ϴ� �Լ� �����

	while (true)
	{
		system("cls");

		PlayerInputKey(&player);

		ShowPlayer(&player);

		MoveXY2(itemAPos);
		printf("��");

		InteractWithItem(&player, &itemA);		// �ּҿ� �����Ͱ� ������� �ʾҴ�. -> Call by Value, Reference
		ShowplayerItemInfo(&itemA);
		//ShowAllPlayerItemInfo(AllItem, 2);

		// �迭�� �Ű������� �޾ƿͼ� ������ �����Ϳ� �����Ѵ�.

		Sleep(100);
	}
	
}