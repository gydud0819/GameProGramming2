#pragma once

//char sword[3][5] =
//{
//
//};

typedef struct _STAGE
{
	char* name;
	char(*map)[6];		// 이중 배열을 포인터로 표현하는 형태
}Stage;

// 구조체로 맵의 정보		(맵의 이름, 포인터로 표현하는 형태)
// 구조체로 아이템의 정보	(아이템 이름, 레벨, 이미지)
// 화면에 출력하는 코드

Stage GetStageInfo(int stageNumber);
