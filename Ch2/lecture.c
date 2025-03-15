#include "lecture.h"

// ���� ����

int GameScore = 0;	// ���� �ø��� ����
int GameItem = 0;	// ������ ������ ����

int PlayerX = 0;	// �÷��̾� ��ġ ����
int PlayerY = 0;	

void ShowLecture()
{
	printf("���� ����1\n\n");

	// ������ �����ϰ� �ּҸ� ����غ���

	int num1 = 10;

	int* intptr = &num1;				// �� : �ּ�		=		�� : ��

	printf("���� ��� : %d\n", num1);
	printf("�ּ� ��� : %p\n\n", intptr);

	printf("===============================\n");

	printf("���� �ǽ� 1\n\n");

	// int* 2���� �ʿ��ϴ�. (int�� �ּҰ� 2�� �ʿ��ϴ�.)
	int numA = 5;
	int numB = 6;
	printf("numA�� �� : %d, numB�� �� : %d\n", numA, numB);

	// Swap �Լ� ��� �� ����� ��
	Swap(&numA, &numB);
	printf("numA�� �� : %d, numB�� �� : %d\n\n", numA, numB);

	printf("===============================\n");

	printf("���� ���� 1\n\n");	// ������ ȹ���ϴ� �ý����� ���� (Ư�� �ൿ�� �� ��, �ð��� ���� �߰�)

	IncreaseScore(&GameScore, 10);
	printf("���� ���� : %d\n", GameScore);

	printf("===============================\n");

	printf("���� �ǽ� 2\n\n");

	// ���� 3�� �����

	float weight = 1.5f;
	int weaponLv = 1;	// ��������
	int baseAP = 10;

	// ���� ���ݷ��� ������Ű�� �Լ�
	// �Ϲ� ��ȭ�� ��� ��ȭ�� ���� �Լ��� ����ؼ� ������ �� ������?
	printf("����ġ ���� : %f, ���� : %d, �⺻ ���ݷ� : %d\n", weight, weaponLv, baseAP);

	UpgradeWeapon(&weaponLv, baseAP, &weight);

	printf("����ġ ���� : %f, ���� : %d, �⺻ ���ݷ� : %d\n", weight, weaponLv, baseAP);

	printf("===============================\n");

	// ����
	// �Լ��� �̿��ؼ� ���� �����Ѵ�.
	// �ּҸ� �̿��ؼ��� ���� ������ �� �ִ�. 
	// ���� �ּҸ� ����ؾ� �ұ�?
	// 1. �ܺ��� ���� �����ؾ� �� ��, 2. �����;��� ������ Ÿ���� �ʹ� Ŭ �� �ּҸ����� ������ �� �ִ�. 

	// �������� ������ ������Ű�� �Լ� �����
	printf("�⺻ �������� ���� : %d\n", GameItem);
	IncreaseItem(&GameItem, 2);
	printf("ȹ���� �������� ���� : %d ��\n", GameItem);

	printf("===============================\n");

	// �÷��̾��� ��ǥ�� �̵���Ű�� �Լ��� �����
	printf("�÷��̾��� X ��ġ : %d, �÷��̾��� Y ��ġ : %d\n", PlayerX, PlayerY);
	MovePlayer(&PlayerX, &PlayerY);
	printf("�̵��� �÷��̾��� X ��ġ : %d, �÷��̾��� Y ��ġ : %d\n", PlayerX, PlayerY);
}

void Swap(int* a, int* b)
{
	int temp = *a;		// a�� �ּ��ε� �ּҷκ��� ���� �������� ������(&) temp�� ���� ���� 5�� ����ȴ�.
	*a = *b;			// *������ ���� = �� : a�� �ּҿ� ���� �����ض�. 
	*b = temp;			// *b : b�� �ּҿ� ����Ǿ� �ִ� ���� �ҷ��Ͷ�.
	// 1. (*b -> 6) 2. *a = 6 3. numA = 6
}

void IncreaseScore(int* score, int points)
{
	// GameScore �ּҸ� �޾ƿ�
	// *�ּ� ���� = ��;		// �ܺο� �ִ� GameScore���� ����ȴ�.

	*score += points;
}

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight)	
{
	// ������ 1 ���� ��Ų��.
	// ����ġ�� Ư�� �������� �����Ѵ�.

	*weaponLv += 5;

	if (*weaponLv % 5 == 0)
	{
		*weight = *weight * 1.5f;

	}

	printf("���� ���� ���ݷ� : %f\n", (*weaponLv) * (*weight) + baseAP);
}

void IncreaseItem(int* Item, int Plus)
{
	*Item += Plus;
}

void MovePlayer(int* x, int* y)
{
	*x = 5;
	*y = 10;
}



