#pragma once
#include "Rank.h"

void SaveFileTemp()
{
	FILE* fptr = fopen(RANKFILEPATH, "w");	// 뒤에 쓸건지 읽어올건지 생각해서 사용해야 한다.
	// fputc	작은 따옴표를 사용한다.
	/*fputc('a', fptr);
	fputc('\n', fptr);
	fputc('a', fptr);
	fputc('a', fptr);*/
	// fputs	문자열로 저장하며 큰 따옴표를 사용한다. 
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

	//printf("등수: %d, 점수 : %d, 이름 : %s", order, score, name);

	fclose(fptr3);
}

int LoadRank(const char* FileName, Rank rank[])
{
	int count = 0;

	FILE* fptr2 = fopen(FileName, "r");

	if (fptr2 == NULL)
	{
		printf("파일 열기 실패\n");
		return;
	}
	
	while (fscanf(fptr2, "%d %d %49s", &rank[count].order, &rank[count].score, rank[count].name) != EOF)	// 파일이 끝날때까지 읽어오는 코드 
	{
		count++;
	}
	fclose(fptr2);
	
	return count;
}

void PrintRanking(Rank rank[], int count)
{
	// 테두리 만들기
	printf("+------+------+------------------+\n");
	printf("| 등수 | 점수 |    팀 이름       |\n");
	printf("+------+------+------------------+\n");
	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d | %16s |\n", rank[i].order, rank[i].score, rank[i].name);	// 등수, 점수, 이름 순
		printf("+------+------+------------------+\n");
	}
}

void AddRank(Rank rank[], int* order, const char* name, int score)
{
	if (*order < MAXRANK)
	{
		rank[*order].order = *order + 1;	// [] 속 숫자는 순서
		rank[*order].score = score;
		strncpy(rank[*order].name, name, MAXLENGH - 1);
		rank[*order].name[MAXLENGH - 1] = '\0';
		(*order)++;

	}
	else
	{
		printf("최다 플레이어 저장 수를 초과하였습니다.\n");
	}
}
