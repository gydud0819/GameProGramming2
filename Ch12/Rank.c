#pragma once
#include "Rank.h"

void FileSaveTemp()
{
	FILE* fp = fopen(RANKFILEPATH, "w");	// 뒤에 쓸건지 읽어올건지 생각해서 사용해야 한다.
	// fputc	작은 따옴표를 사용한다.
	/*fputc('a', fptr);
	fputc('\n', fptr);
	fputc('a', fptr);
	fputc('a', fptr);*/
	// fputs	문자열로 저장하며 큰 따옴표를 사용한다. 
	//fputs("aaa", fptr);
	// fprintf
	fprintf(fp, "%d %s %d\n", 1, "Amy", 5);
	fclose(fp);
}

void FileSave(const char* FileName, Rank rank[], int count)
{
	FILE* fptr = fopen(FileName, "w");

	for (int i = 0; i < count; i++)
	{
		fprintf(fptr, "%d %d %s\n", rank[i].order, rank[i].score, rank[i].name);

	}
	fclose(fptr);
}

void FileLoadTemp()
{
	FILE* fp2 = fopen("Text.txt", "r");

	/*char mstring[12];
	fgets(mstring, 12, fp2);
	printf("%s\n", mstring);*/

	int order = 0;
	int score = 0;

	char name[MAXLENGTH];

	fscanf(fp2, "%d %d %4s", &order, &score, name);

	printf("순서: %d, 점수 : %d, 이름 : %s\n", order, score, name);

	fclose(fp2);
}

int LoadRank(const char* FileName, Rank rank[])
{
	int count = 0;

	FILE* fptr = fopen(FileName, "r");

	if (fptr == NULL)
	{
		printf("파일 열기 실패\n");
		return;
	}
	
	while (fscanf(fptr, "%d %d %49s", &rank[count].order, &rank[count].score, rank[count].name) != EOF)	// 파일이 끝날때까지 읽어오는 코드 
	{
		count++;
	}
	fclose(fptr);
	
	return count;
}

void PrintRanking(Rank rank[], int count)
{
	// 테두리 만들기
	printf("+------+----------+------------------+\n");
	printf("| 순서 | 우승 횟수|  팀 이름         |\n");
	printf("+------+----------+------------------+\n");
	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d     | %16s |\n", rank[i].order, rank[i].score, rank[i].name);	// 등수, 점수, 이름 순
		printf("+------+----------+------------------+\n");
	}
}

void AddRank(Rank rank[], int* order, const char* name, int score)
{
	if (*order < MAXRANK)
	{
		rank[*order].order = *order + 1;	// [] 속 숫자는 순서
		rank[*order].score = score;
		strncpy(rank[*order].name, name, MAXLENGTH - 1);
		rank[*order].name[MAXLENGTH - 1] = '\0';
		(*order)++;

	}
	else
	{
		printf("최다 플레이어 저장 수를 초과하였습니다.\n");
	}
}
