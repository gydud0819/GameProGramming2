#include "2DimensionArray.h"
#include "Stage.h"


int main()
{
	//ShowLecture();
	Stage stage1;			// Stage 타입의 빈 상자 이름이 stage1인 변수이다. 
	SetStage(&stage1, 1);
	Stage stage2;			// Stage 타입의 빈 상자 이름이 stage1인 변수이다. 
	SetStage(&stage2, 2);
	printf("스테이지 이름 출력 : %s\n", stage1.name);
	printf("스테이지1 맵 출력\n");
	
	for (int i = 0; i < STAGE_COL; i++)
	{
		printf("%s\n", stage1.map[i]);
	}
	

	printf("스테이지 이름 출력 : %s\n", stage2.name);
	printf("스테이지2 맵 출력\n");

	for (int i = 0; i < STAGE_COL; i++)
	{
		printf("%s\n", stage2.map[i]);
	}
}