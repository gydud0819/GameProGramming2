/*
* �ۼ���	: 2025-03-18
* �ۼ���	: ��ȿ��
* ����	: �迭�� ������
*/

/*
* 1. �迭(array)	: ��, ���� ����ϴ°�?
* ����	: ����ǥ(����, ����, ����) 
* ��� ����		: �ϳ��� ������ ���� Ÿ���� ������ ǥ���� �� �ִ�.
*/

/*
* ����(character) : '�ܾ�', 'a' 'b' 'c'
*/
#include <stdio.h>
//#include <string>
#include "Item.h"

int main()
{
	printf("ch4\n");

	printf("============================================================\n");

	printf("�迭 ���� : ����ǥ �����\n");

	int ScoreA = 100;	// ����
	int ScoreB = 90;	// ����
	int ScoreC = 94;	// ����

	// ���� : ������ Ÿ������ ������ ����� - �޸𸮿� ����Ǵ� ũ��, 010101 �ؼ��ϴ� ���, �����ϴ� �޸� �ּ�
	// ���� Ÿ���� ������ �ϳ��� �̸����� ǥ���ϴ� ��� : �迭

	int scores[3] = { 100,90,94 };	// �迭�� ���� : int ������ Ÿ���� 3�� �����ϴ� scores�̸��� ����	// ���ȣ�� ����ؾ��Ѵ�.

	scores[0];	// (scores �ּ� + 0) = �ڱ��ڽ�
	scores[1];	// (scores �ּ� + 1) = �ι�° ����
	scores[2];

	printf("������ ������� ����ϼ���\n");
	for (int i = 0; i < 3; i++)
	{
		printf("����  : %d\n", scores[i]);
	}

	printf("============================================================\n");

	//printf("���� : %d, ���� : %d, ���� : %d\n", ScoreA, ScoreB, ScoreC);

	// �κ��丮�� �� ������ ����
	// ������ �̸�(���ڿ�), ������ ����, Index ��
	
	char itemName[10] = "AAA";	// char A x 3 - ���ڵ��� �迭(���ڿ�)
	int itemCount = 1;
	int itemIndex = 1;

	printf("����\n\n");

	printf("������ 1���� ����\n");
	printf("������ ��ȣ : %d, ������ �̸� : %s, ������ ���� : %d��\n\n", itemIndex, itemName, itemCount);
	
	// �������� �����͸� �����Ѵ�. (���� ������ �������ϼ��� �ְ�, ���̺� ������ �ϼ��� �ִ�.)
	int itemCounts[5] = { 1,2,3,4,5};
	int itemIndexs[5] = { 1,2,3,4,5};
	char* itemNames[5] = { "AAA", "BBB", "CCC", "DDD", "EEE" };		// �迭�� ������ó�� ���

	printf("��� �������� �����Ѵ�.\n\n");

	for (int i = 0; i < 5; i++)
	{
		printf("������ ��ȣ : %d, ������ �̸� : %s, ������ ���� : %d��\n", itemIndexs[i], itemNames[i], itemCounts[i]);

	}

	printf("============================================================\n");

	ShowItemInfo();	// ������ ������ ��Ÿ���� �Լ�

	printf("���ڿ��� ���� ���� \n\n");

	// ���(apple) ���ڷ� ����غ���
	char char1 = 'a';
	char char2 = 'p';
	char char3 = 'p';
	char char4 = 'l';
	char char5 = 'e';

	// appleis ����
	// apple is red
	// ���ڿ����� �������� ���鹮�ڸ� ����ؼ� �� ������ �������� �˸���.

	printf("%c%c%c%c%c\n",char1, char2, char3, char4, char5);

	char chars[5] = { 'a','p','p','l','e' };	// "apple" <�ѹ��� ����� ���� �ִµ� �̰� ���߿� ��� ����

	for (int i = 0; i < 5; i++)
	{
		printf("%c", chars[i]);
	}

	char scoreName[10] = "����";		// �������� �ǹ̰� �����ִ�. 16������ �ּҷ� �����ϰ� �ִ�.

	printf("%s\n", scoreName);	// string

	char scoreName2[10] = "English";	// �迭�� �������� �� ������ ������ ������ ��� �ɱ�? int, double -> 0

	printf("%c\n", scoreName2[0]);
	printf("%c\n", scoreName2[1]);
	printf("%c\n", scoreName2[2]);
	printf("%c\n", scoreName2[3]);
	printf("%c\n", scoreName2[4]);
	printf("%c\n", scoreName2[5]);
	printf("%c\n", scoreName2[6]);
	printf("%d\n", scoreName2[7]);		// ���� �Ҵ��ϰ� ������ ���� ��� 0�̳� �����Ⱚ���� ������ ä���.
	printf("%d\n", scoreName2[8]);		// ������ ������ ������ �� ������ 0���� �޲ٴ°ǰ�? �ƴ� �ƹ��͵� �ƴ� NULL�� �޲ٴ°ǰ�? �̰͵� �ƴϸ� �����Ⱚ���� �޲ٴ°ǰ�?

	// "����" -> ���ڿ�		�޸� �ּ�| �� | �� |
	// �޸��� ù��° �ּҸ� �˰�, �޸��� ũ�⸦ �˸� ���ڸ� �ѹ��� ����� �� �ִ�.
	// "��"�̶�� ���� �ּҷ� ���� �Ǿ� �ִ�.
	// �迭�� ������ �ּ��̴�. 

	printf("============================================================\n");

	char* scoreptr = "Math";

	printf("�̸� : %s\n", scoreptr);
	printf("%c", *(scoreptr + 0));	// Math "M" ���� �ּ� - scoreptr(1byte)
	printf("%c", *(scoreptr + 1));	// Math "a" ���� �ּ� - scoreptr(1byte)
	printf("%c", *(scoreptr + 2));	// Math "t" ���� �ּ� - scoreptr(1byte)
	printf("%c", *(scoreptr + 3));	// Math "h" ���� �ּ� - scoreptr(1byte)

	// �� �迭�� �ּҷ� �����͸� �����ϰ� ������?
	// �ִ����� ȿ���� �޸𸮸� ����ϱ� ���ؼ��̴�. 
	// �ּҸ� �ȴٸ�

	int number[10];	// 4x10 �̸� �Ҵ� 

	// �������� �̸��� ǥ���ϴ� ��� 
	// �ܾ��� �迭�� ǥ���ϴ� ���
	// �̸��� �ܾ��� �迭


	char ItemName[10] = "�̸�";	// 10ĭ�� �̸� Ȯ���ؼ� �����´�.		
	char* itemNameptr = "�̸�2";	// �ּҷ� �����´�.		

	printf("%s, %s\n", ItemName, itemNameptr);

	// �����Ϳ� �ε����� �̿��� ���� ������ �� �ִ�. (�Ѵ� �ּҸ� ���� ���� ���������� ������ �� �ִ�.)
	ItemExample();	// �����Ϳ� �ε����� �̿��� ���� �Լ�
}