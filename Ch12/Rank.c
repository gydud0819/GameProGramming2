#pragma once
#include "Rank.h"

void SaveFileTemp()
{
	FILE* fptr = fopen(RANKFILEPATH, "w");	// �ڿ� ������ �о�ð��� �����ؼ� ����ؾ� �Ѵ�.
	// fputc	���� ����ǥ�� ����Ѵ�.
	/*fputc('a', fptr);
	fputc('\n', fptr);
	fputc('a', fptr);
	fputc('a', fptr);*/
	// fputs	���ڿ��� �����ϸ� ū ����ǥ�� ����Ѵ�. 
	//fputs("aaa", fptr);
	// fprintf
	fprintf(fptr, "%d %s %d\n", 1, "Amy", 5);
	fclose(fptr);
}

void SaveFile(const char* FileName, Rank rank[], int count)
{
	FILE* fptr2 = fopen(FileName, "w");
	for (int i = 0; i < count; i++)
	{
		fprintf(fptr2, "%d %d %s\n", rank[i].order, rank[i].score, rank[i].name);

	}
}

void FileLoadTemp()
{
	FILE* fptr3 = fopen("Text.txt", "r");

	char mstring[12];
	fgets(mstring, 12, fptr3);
	printf("%s\n", mstring);

	int order = 0;
	int score = 0;

	char name[MAXLENGH];

	fscanf(fptr3, "%d %d %s", &order, &score, name);

	//printf("���: %d, ���� : %d, �̸� : %s", order, score, name);

	fclose(fptr3);
}

int LoadRank(const char* FileName, Rank rank[])
{
	int count = 0;

	FILE* fptr2 = fopen(FileName, "r");

	if (fptr2 == NULL)
	{
		printf("���� ���� ����\n");
		return;
	}
	
	while (fscanf(fptr2, "%d %d %49s", &rank[count].order, &rank[count].score, rank[count].name) != EOF)	// ������ ���������� �о���� �ڵ� 
	{
		count++;
	}
	fclose(fptr2);
	
	return count;
}

void PrintRanking(Rank rank[], int count)
{
	// �׵θ� �����
	printf("+------+------+------------------+\n");
	printf("| ��� | ���� |    �� �̸�       |\n");
	printf("+------+------+------------------+\n");
	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d | %16s |\n", rank[i].order, rank[i].score, rank[i].name);	// ���, ����, �̸� ��
		printf("+------+------+------------------+\n");
	}
}

void AddRank(Rank rank[], int* order, const char* name, int score)
{
	if (*order < MAXRANK)
	{
		rank[*order].order = *order + 1;	// [] �� ���ڴ� ����
		rank[*order].score = score;
		strncpy(rank[*order].name, name, MAXLENGH - 1);
		rank[*order].name[MAXLENGH - 1] = '\0';
		(*order)++;

	}
	else
	{
		printf("�ִ� �÷��̾� ���� ���� �ʰ��Ͽ����ϴ�.\n");
	}
}
