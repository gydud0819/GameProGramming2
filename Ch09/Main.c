/*
* �ۼ���	: 2025-03-25
* �ۼ���	: ��ȿ��
* ����	: 2���� �迭
*/

#include "2DimensionArray.h"
#include "Stage.h"
#include "Item.h"

int main()
{
	//ShowLecture();
	Stage stage1;			// Stage Ÿ���� �� ���� �̸��� stage1�� �����̴�. 
	SetStage(&stage1, 1);
	Stage stage2;			// Stage Ÿ���� �� ���� �̸��� stage1�� �����̴�. 
	SetStage(&stage2, 2);
	printf("�������� �̸� ��� : %s\n", stage1.name);
	printf("��������1 �� ���\n");
	
	for (int i = 0; i < STAGE_COL; i++)
	{
		printf("%s\n", stage1.map[i]);
	}
	

	printf("�������� �̸� ��� : %s\n", stage2.name);
	printf("��������2 �� ���\n");

	for (int i = 0; i < STAGE_COL; i++)
	{
		printf("%s\n", stage2.map[i]);
	}

	Item item1;
	SetItem(&item1, 1);
	printf("������ �̸�: %s\n", item1.itemName);
	printf("������ ȿ��: %s\n", item1.itemStat);
	printf("������ �̹��� ���\n\n");

	for (int i = 0; i < STAGE_COL2; i++)
	{
		printf("%s\n", item1.itemImage[i]);
	}

	Character character;
	SetCharacter(&character, 1);
	printf("ĳ���� �̸�: %s\n", character.characterName);
	printf("ĳ���� �̹��� ���\n\n");

	for (int i = 0; i < STAGE_COL3; i++)
	{
		printf("%s\n", character.characterImage[i]);
	}
}