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
		// �������� 1���� �����Ѵ�. -> Stage1�� �����´�.
		stageptr->name = "������ ���� ��";
		stageptr->map = stage1;
		break;
	case 2:
		// �������� 2���� �����Ѵ�. -> Stage2�� �����´�.
		stageptr->name = "�����ε�";
		stageptr->map = stage2;
		break;
	default:
		printf("�߸��� �������� ��ȣ�Դϴ�.\n");
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
	printf("Stage1 ��\n");
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
