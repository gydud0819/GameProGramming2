/*
* �ۼ���	: 2025-03-31
* �ۼ���	: ��ȿ��
* ����	: ���� ����� (File Stream & File Input Output)
*/

/*
* ������ �����ϱ� ���� �ܰ�
* 1. ������ ����� ��� �����ϱ�
* 2. � ������ ������� �������ش�. (�����̸�, Ȯ���� ��)
* 3. ������ ��� �����͸� �����Ѵ�.
*/

/*
* Ư�� ȯ��ü������ (Window64bit) ������ �����Ѵ�.
* ��ǻ�Ϳ� ��ġ�� �����ؾ� �Ѵ�. 
*/

/*
* ���� ���� ������ �ڵ�� �غ���
*/
#define _CRT_SECURE_NO_WARNINGS // scanf_s ������ ������� �ʰ� scanf�� ����� �� �ֵ��� ��� �����ϴ� �ڵ�
#include <stdio.h>
#include "FileHandler.h"
// printf, scanf (�ܼ� �����)
// ���� �����, ���� ����ü

/*
* ������ �����ϴ� �Լ�
* fopen - �ҷ��� ��θ� �������ش�. ��� �����ð��� �������Ѵ�. (���� �� : read, �� �� : write, 
*/

/*
* ��Ʃ�� ��Ʈ����
* Streaming: � ������ ���������� �����ϴ� �� 
* ��� �� = ���� : �ӽ� ������ �ο��ؼ� �� �ӽ� �����͸� �����ش�. 
* 
* ��Ʈ ��Ʈ��, ���� ��Ʈ���� �����ΰ�?
* ��Ʈ : 0,1�� ������ ���� / ����Ʈ: ������ �⺻ ����
* ��Ʈ���� �����ؾ� ������ �ٷ� �� �ִ�. 
* fopen : ���� ��Ʈ���� �������ִ� �Լ��̴�. "w", "r", "a"
*/

typedef struct _PEOPLE
{
	char name[4];
	int age;
}people;

// ĳ������ �̸��� ������ �����ϴ� ����ü �����
typedef struct _CHARACTER
{
	char nickName[20];
	int score;
}Character, Score;

/*
* C:\Users\Administrator\Desktop\GameProGramming2\Ch11\example\.txt
* fopen("") �� �ڵ尡 �ۼ��ǰ� �ִ� ���� �ּҸ� ��ȯ�Ѵ�. 
* ���� �̸� ��θ� �����غ��� 
* ������ �����ؼ� �����͸� �����ϰ� �ʹٸ�, ���� �̸�\\�����̸� Ȯ����
*/

/*
* File ����ü�� ����ϸ� �ڵ帣 �̿��ؼ� �����͸� �ܺο� ������ �� �ִ�.
* FILE ������ �ּҸ� �����ؾ� ������ ���� �Ǵ� �о�� �� �ִ�.
* ������  �����ؼ� �����͸� �����ϰ� �ʹٸ�, ���� �̸�\\�����̸�.Ȯ����
* 
* fopen(); fclose();
* 
* fputs(); fprintf(); ���� ��尡 "w" �����͸� ������ �� �ִ�.
* fgets(); fscanf(); ���� ��尡 "r" �����͸� ������ �� �ִ�.
* 
* "w" ��带 �����ϸ� ���� �����Ͱ� ����  �����ȴ�.
* "r" ��带 �����ϸ� ���� �����Ϳ� �̾ �߰��ȴ�. (���� ��ŷ�� ���ο� ������ ��ϵ� �� �ִ�.)
*/

int main()
{
	printf("���� ���� �� ����� �ۼ��ϱ�\n");

	FILE* fptr = fopen("example\\example2.txt", "w");

	// 1. �����͸� ���ڿ��� ���� ������ �� 
	fputs("BBB 100\n", fptr);
	// 2. ������ �ҷ��ͼ� �����ؾ� �Ѵ�. 

	// ������ ����ü�� �ҷ��� ��
	people player1 = { "CCC", 23 };
	fprintf(fptr, "%s %d\n", player1.name, player1.age);

	// 3. ���� ����ü�� ���� �޸��忡 �����ϱ�
	Score myScore = {"Picher", 1000};
	fprintf(fptr, "%s %d\n", myScore.nickName, myScore.score);


	//Character player2 = { "Catcher", 750 };
	//fprintf(fptr, "%s %d\n", player2.nickName, player2.score);

	//Character player3 = { "Infilder", 500 };
	//fprintf(fptr, "%s %d\n", player3.nickName, player3.score);


	fclose(fptr);

	// �Լ��� ǥ���غ��� 
	
	printf("��ξȿ� �ִ� ������ �о����\n");

	FILE* fptr2 = fopen("example\\example2.txt", "r");


	char name[4];
	int age;
	int maxNumber = 3;

	for (int i = 0; i < 3; i++)
	{
		fscanf(fptr2, "%s %d", name, &age);
		printf("�̸� : %s, ���� : %d\n", name, age);
	}

	fclose(fptr2);

	printf("�Լ��� ������ �����ϱ�\n");

	char myName[4] = "FFF";
	int myScore2 = 5000;


	SaveScore(myName, myScore2);
}