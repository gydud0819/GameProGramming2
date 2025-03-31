#define RANKFILEPATH "Rank.txt"
#include "FileHandler.h"


/*
* ����
* 
* 1. FILE* �����ϱ� (������ �����ϸ鼭 ��ο� ��嵵 ���ÿ� �����Ѵ�.)
* 
*/
void SaveScore(char* name, int score)
{
	FILE* fptr = fopen(RANKFILEPATH, "w");	// wt : write txt, wb : write binary
	
	if (fptr == NULL)		// fptr�� �ƹ��͵� ����Ű�� ���� �� 
	{
		printf("��ο� Ÿ���� �������� �ʽ��ϴ�.\n");
		return;				// �� ������ ����ϰ� ��ȯ�Ѵ�. 
	}

	//fputc, fputs, fprintf		������� ����, ���ڿ�
	
	fprintf(fptr, "%s %d", name, score);

	fclose(fptr);
}

void LoadRank()
{
	FILE* fptr = fopen(RANKFILEPATH, "r");	// wt : write txt, wb : write binary

	if (fptr == NULL)		// fptr�� �ƹ��͵� ����Ű�� ���� �� 
	{
		printf("��ο� Ÿ���� �������� �ʽ��ϴ�.\n");
		return;				// �� ������ ����ϰ� ��ȯ�Ѵ�. 
	}

	//fputc, fputs, fprintf		������� ����, ���ڿ�

	char name3[4];
	int score3;
	fscanf(fptr, "%s %d", name3, &score3);
	fprintf("�̸� : %s ���� : %d\n", name3, score3);

	//fgetc, fgets, fscanf	

	fclose(fptr);
}

void SaveRankData(Rank* rankptr)
{
	rankptr->nickName[1] = "player1";
}
