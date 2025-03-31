#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <conio.h>

void SaveScore(char* name, int score);

void LoadRank();

typedef struct _RANK
{
	char* nickName[8];
	int* Score;
	int* Rank;
	COORD pos;

}Rank;

void SaveRankData(Rank* rankptr);

void GotoXY(int x, int y);

void ShowRank();

