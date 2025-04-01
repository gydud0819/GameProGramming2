#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h>
#define RANKFILEPATH "Rank.txt"
#define MAXRANK 10
#define MAXLENGH 50

typedef struct _RANK
{
	int order;	// 표
	int score;	// 점수
	char name[MAXLENGH];
}Rank;

void SaveFileTemp();
void SaveFile(const char* FileName, Rank rank[], int count);

void FileLoadTemp();

int LoadRank(const char* FileName, Rank rank[]);	// 메모장에 저장된 count를 반환하는 함수 

void PrintRanking(Rank rank[], int count);	// count 수만큼 랭킹을 출력하는 함수 

void AddRank(Rank rank[], int* order, const char* name, int score);	// 등수는 변해야 하기 때문에 포인터를 사용한다.

// scanf - 숫자 지정 1. 랭킹 등록 2. 랭킹 보기 3. 프로그램 종료