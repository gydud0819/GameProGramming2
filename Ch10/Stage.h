#pragma once

#define STAGE_WIDTH 20		// ����
#define STAGE_HEIGHT 20		// ����

#define STAGE_WIDTH2 50			// ����2
#define STAGE_HEIGHT2 30		// ����2

char stage1[STAGE_HEIGHT][STAGE_WIDTH + 1];
char stage2[STAGE_HEIGHT][STAGE_WIDTH + 1];
char stage3[STAGE_HEIGHT2][STAGE_WIDTH2 + 1];
char stage4[STAGE_HEIGHT2][STAGE_WIDTH2 + 1];

typedef struct _STAGEPOS		// �������� ��ġ �̵���Ű�� ����ü
{
	int x;
	int y;
}StagePos;

typedef struct _STAGE			// �������� ����ü
{
	char* name;
	char* (*stage)[STAGE_WIDTH2+ 1];
	StagePos stagePos;
}Stage;