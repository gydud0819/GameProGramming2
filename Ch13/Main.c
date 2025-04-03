/*
* 작성일	: 2025-04-03
* 작성자	: 박효영
* 주제	: 상점 기능 구현하기
*/

/*
* 1. 상점을 데이터로 정의하기 (아이템을 복수형으로 정의하기)
* 2. 아이템을 정의하기 (배열로 접근할 수 있게 해야한다.)
*/

/*
* 1. 2차원 배열 함수로 표현하기 - void 함수 이름 (char (*map)[길이 + 1]);
* 2. 파일 저장 및 로드 시스템 게임에 적용해보기 (구조체, 함수, 포인터 사용해보기)
* 3. 만들고 싶은 기능 정하기 
*/

#define _CRT_SECURE_NO_WARNINGS
#define NAMELENGTH 50
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

typedef struct _ITEM
{
	char name[NAMELENGTH];	// 이름
	int price;				// 가격
}Item, item;

void AddShopData(Item shop[], int* shopcount, const char* name, int price)
{
	strncpy(shop[*shopcount].name, name, NAMELENGTH);	// strncpy를 사용해 이름 복사
	shop[*shopcount].price = price;
	(*shopcount)++;		// 상점 인덱스 1개씩 늘리기

	/*for (int i = 0; i < count; i++)
	{
		strncpy(Shop[i].name, item1.name, NAMELENGTH);
		Shop[i].price = item1.price;
	}*/
}

void ShowInventoryTable(Item inventory[], int inventoryCount)	// 아이템을 보여주는 함수
{
	// 테두리 만들기
	printf("유저의 인벤토리\n");
	printf("+------+----------+------------------+\n");
	printf("| 순서 |   이름   |       가격       |\n");
	printf("+------+----------+------------------+\n");
	for (int i = 0; i < inventoryCount; i++)
	{
		printf("| %4d | %8s |  %4d            |\n", i + 1, inventory[i].name, inventory[i].price);	// 등수, 점수, 이름 순
		printf("+------+----------+------------------+\n");
	}
	//_getch();
}

void BuyItem(Item item, Item inventory[], int* count)	// item : 구매할 아이템, inventory : 플레이어가 저장할 인벤토리, 인벤토리의 저장 위치
{
	inventory[*count].price = item.price;
	strncpy(inventory[*count].name, item.name, NAMELENGTH);
	(*count)++;
}

void ShopPhase(Item shop[], Item inventory[], int count, int* inventoryCount, bool* gameQuit)	// 
{
	printf("상점에 진입했습니다.\n");
	while (true)
	{
		printf("1. 상점 목록을 확인한다 2. 아이템을 구입한다 3. 상점을 나간다 4. 게임 종료\n");
		int input = 0;
		scanf("%d", &input);
		int itemIndex = 0;

		switch (input)
		{
		case 1:
			ShowInventoryTable(shop, count);
			break;
		case 2:
			printf("구매할 아이템 번호를 눌러주세요.\n");
			scanf("%d", &itemIndex);
			BuyItem(shop[itemIndex - 1], inventory, inventoryCount);
			break;
		case 3:
			return;
		case 4:		// 4를 누르면 종료
			(*gameQuit) = true;
			return;
		default:
			break;
		}
	}
}

int main()
{
	Item Shop[10];
	int shopCount = 0;
	Item Inventory[10];
	int InventoryCount = 0;

	AddShopData(Shop, &shopCount, "칼", 1000);
	AddShopData(Shop, &shopCount, "황금사과", 300);
	AddShopData(Shop, &shopCount, "망토", 1000);
	AddShopData(Shop, &shopCount, "펜던트", 450);

	bool gameQuit = false;	// gameQuit이 true가 되면 게임이 종료되게 한다.

	while (true)
	{
		ShopPhase(Shop, Inventory, shopCount, &InventoryCount, &gameQuit);

		ShowInventoryTable(Inventory, InventoryCount);

		if (gameQuit)
		{
			break;
		}
	}
	printf("게임이 종료되었습니다.\n");
}