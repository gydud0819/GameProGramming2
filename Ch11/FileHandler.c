#define RANKFILEPATH "Rank.txt"
#include "FileHandler.h"


/*
* 정리
* 
* 1. FILE* 선언하기 (파일을 선언하면서 경로와 모드도 동시에 선언한다.)
* 
*/
void SaveScore(char* name, int score)
{
	FILE* fptr = fopen(RANKFILEPATH, "w");	// wt : write txt, wb : write binary
	
	if (fptr == NULL)		// fptr이 아무것도 가리키지 않을 때 
	{
		printf("경로에 타입이 존재하지 않습니다.\n");
		return;				// 위 내용을 출력하고 반환한다. 
	}

	//fputc, fputs, fprintf		순서대로 문자, 문자열
	
	fprintf(fptr, "%s %d", name, score);

	fclose(fptr);
}

void LoadRank()
{
	FILE* fptr = fopen(RANKFILEPATH, "r");	// wt : write txt, wb : write binary

	if (fptr == NULL)		// fptr이 아무것도 가리키지 않을 때 
	{
		printf("경로에 타입이 존재하지 않습니다.\n");
		return;				// 위 내용을 출력하고 반환한다. 
	}

	//fputc, fputs, fprintf		순서대로 문자, 문자열

	char name[4];
	int score;
	fscanf(fptr, "%s %d", name, &score);
	fprintf("이름 : %s 점수 : %d\n", name, score);

	//fgetc, fgets, fscanf	

	fclose(fptr);
}
