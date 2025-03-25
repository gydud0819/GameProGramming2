#include "Stage.h"

char stage1[STAGE_COL][STAGE_ROW + 1] =
{
	"#########",
	"#       #",
	"#       #",
	"#       #",
	"#       #",
	"#       #",
	"#       #",
	"#########",

};
char stage2[STAGE_COL][STAGE_ROW + 1] =
{
	"#########",
	"#    #  #",
	"####    #",
	"#    #  #",
	"#     ###",
	"##      #",
	"#  #   ##",
	"#########",
};


void SetStage(Stage* stageptr, int index)
{
	switch (index)
	{
	case 1:
		// 스테이지 1번을 선택한다. -> Stage1을 가져온다.
		stageptr->name = "달콤한 과자 숲";
		stageptr->map = stage1;
		break;
	case 2:
		// 스테이지 2번을 선택한다. -> Stage2을 가져온다.
		stageptr->name = "슈가로드";
		stageptr->map = stage2;
		break;
	default:
		printf("잘못된 스테이지 번호입니다.\n");
		break;
	}


	/*char Stage1[8][9] =
	{
		{"#########"},
		{"#       #"},
		{"#       #"},
		{"#       #"},
		{"#       #"},
		{"#       #"},
		{"#       #"},
		{"#########"},
	};
	printf("Stage1 맵\n");
	for (int c = 0; c < 8; c++)
	{
		for (int r = 0; r < 10; r++)
		{
			printf("%d", Stage1[c][r]);
		}

		printf("\n");
	}

	char Stage2[8][9] =
	{
		{"#########"},
		{"#       #"},
		{"#       #"},
		{"#    #  #"},
		{"#    ####"},
		{"##      #"},
		{"#  #   ##"},
		{"#########"},
	};*/

}
