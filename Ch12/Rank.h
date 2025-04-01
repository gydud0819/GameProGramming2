#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h>
#define RANKFILEPATH "Rank.txt"
#define MAXRANK 10
#define MAXLENGH 50

typedef struct _RANK
{
	int order;	// ǥ
	int score;	// ����
	char name[MAXLENGH];
}Rank;

void SaveFileTemp();
void SaveFile(const char* FileName, Rank rank[], int count);

void FileLoadTemp();

int LoadRank(const char* FileName, Rank rank[]);	// �޸��忡 ����� count�� ��ȯ�ϴ� �Լ� 

void PrintRanking(Rank rank[], int count);	// count ����ŭ ��ŷ�� ����ϴ� �Լ� 

void AddRank(Rank rank[], int* order, const char* name, int score);	// ����� ���ؾ� �ϱ� ������ �����͸� ����Ѵ�.

// scanf - ���� ���� 1. ��ŷ ��� 2. ��ŷ ���� 3. ���α׷� ����