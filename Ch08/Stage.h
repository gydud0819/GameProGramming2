#pragma once

//char sword[3][5] =
//{
//
//};

typedef struct _STAGE
{
	char* name;
	char(*map)[6];		// ���� �迭�� �����ͷ� ǥ���ϴ� ����
}Stage;

// ����ü�� ���� ����		(���� �̸�, �����ͷ� ǥ���ϴ� ����)
// ����ü�� �������� ����	(������ �̸�, ����, �̹���)
// ȭ�鿡 ����ϴ� �ڵ�

Stage GetStageInfo(int stageNumber);
