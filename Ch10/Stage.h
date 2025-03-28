#pragma once

#define STAGE_WIDTH 20		// 가로
#define STAGE_HEIGHT 20		// 세로

#define STAGE_WIDTH2 50			// 가로2
#define STAGE_HEIGHT2 30		// 세로2

char stage1[STAGE_HEIGHT][STAGE_WIDTH + 1];
char stage2[STAGE_HEIGHT][STAGE_WIDTH + 1];

typedef struct _STAGEPOS		// 스테이지 위치 이동시키는 구조체
{
	int x;
	int y;
}StagePos;

typedef struct _STAGE			// 스테이지 구조체
{
	char* name;
	char* (*stage)[STAGE_WIDTH + 1];
	StagePos stagePos;
}Stage;