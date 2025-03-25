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

		
}
