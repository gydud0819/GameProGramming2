/*
* 작성일	: 2025-03-25
* 작성자	: 박효영
* 주제	: 2차원 배열
*/

#include "2DimensionArray.h"
#include "Stage.h"
#include "Item.h"

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

	Item item1;
	SetItem(&item1, 1);
	printf("아이템 이름: %s\n", item1.itemName);
	printf("아이템 효과: %s\n", item1.itemStat);
	printf("아이템 이미지 출력\n\n");

	for (int i = 0; i < STAGE_COL2; i++)
	{
		printf("%s\n", item1.itemImage[i]);
	}

	Character character;
	SetCharacter(&character, 1);
	printf("캐릭터 이름: %s\n", character.characterName);
	printf("캐릭터 이미지 출력\n\n");

	for (int i = 0; i < STAGE_COL3; i++)
	{
		printf("%s\n", character.characterImage[i]);
	}
}