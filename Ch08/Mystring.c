#include "Mystring.h"

void arrayExample()
{
	printf("1. ���� �迭 ����\n\n");

	char name1 = 'a', name2 = 'p', name3 = 'p', name4 = 'l', name5 = 'e';

	printf("%c%c%c%c%c\n", name1, name2, name3, name4, name5);

	char word[5] = { 'a','p','p','l','e' };

	// �迭 : �ּ�+1

	for (int i = 0; i < 5; i++)
	{
		printf("%c", word[i]);
	}

	// �迭�� �ּ��̴�. �����͸� �̿��ؼ� ǥ���� ���� ������?

	printf("\n\n");
	printf("%s\n", "apple");	

	printf("%p\n", "apple");	// apple�� �ּ�
	// "apple" << ���������� �ؼ��ϱ�
	// %s char �迭�� �ּҸ� �������ڴ�.
	// "apple" - ��½� �ּҰ� ���´�. ��, �ּҷ� ȣ���ϴ� ��

	// �Լ��� �̿��ؼ� ���� �迭�� ���
	// scanf_s : ���ڿ��� ����� �� �ִ� ���� ��������� �Ѵ�. 

	// ���� �迭�� �ּҸ� ������ �����ϰ� ���� ��
	char* inputArray[6];
	char inputWord = inputArray;	// a, p, p, l, e, \0 ���� �����Ǿ� �ִ�.
	printf("�ܾ �Է����ּ���.\n");
	scanf_s("%s", inputArray, 6);	// �ּҸ� ���޹޾Ƽ� �����Ѵ�.
	printf("%s\n", inputArray);

	/*
	* ���� �迭 ���� ����
	* apple ����
	* "apple" << ���������� �ؼ��ϱ�
	* %s char �迭�� �ּҸ� �������ڴ�.
	* "apple" - ��½� �ּҰ� ���´�. ��, �ּҷ� ȣ���ϴ� ��
	* 
	* �Լ��� �̿��ؼ� ���� �迭�� ����� ��
	* scanf_s ���: ���ڿ��� ����� �� �ִ� ���� ��������� �Ѵ�. 
	* 
	*/

	// ���ΰ��� �̸��� �����ϱ�

	// �÷��̾� ����ü - char* �ּҸ� ���޹ް� ����

	char input[10];

	printf("���ΰ��� �̸��� �Է����ּ���.\n");
	scanf_s("%s", input, 10);
	char* playerName = input;	// ���ڿ� ���� 

	printf("%s", playerName);
}
