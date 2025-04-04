﻿#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#define RANKFILEPATH "Rank.txt"
#define MAXRANK 12
#define MAXLENGTH 50

typedef struct _RANK
{
	int order;	// 표
	int score;	// 점수
	char name[MAXLENGTH];
}Rank;

void FileSaveTemp();
void FileSave(const char* FileName, Rank rank[], int count);

void FileLoadTemp();

int LoadRank(const char* FileName, Rank rank[]);	// 메모장에 저장된 count를 반환하는 함수 

void PrintRanking(Rank rank[], int count);	// count 수만큼 랭킹을 출력하는 함수 

void AddRank(Rank rank[], int* order, const char* name, int score);	// 등수는 변해야 하기 때문에 포인터를 사용한다.

void AddRankData(Rank rank[], int* order);			// 랭크를 추가하는 함수

void DeleteRankData(Rank rank[], int* order, int index);	// 정보 삭제 함수

int FindMaxIndex(Rank rank[], int size);			// 전체랭킹 1등을 찾아서 보여주는 함수

// scanf - 숫자 지정 1. 랭킹 등록 2. 랭킹 보기 3. 프로그램 종료