#include "struct.h"

void StructExample()
{
	// 플레이어의 정보를 만들어본다. (1. 플레이어의 위치값)

	struct Pos playerPos = { 1,1 };
	
	// 플레이어의 좌표를 출력해주세요.
	// 접근 연산자(.) - 내부의 데이터에 접근할 수 있다.
	printf("플레이어의 좌표 위치\n");
	printf("플레이어의 좌표: [%d, %d]\n", playerPos.PosX, playerPos.PosY);

	printf("=================================================\n");

	Pos origin1 = { 0,0 };
	struct Circle MyCircle = { origin1, 2.5 };

	printf("원점 : [%d, %d], 반지름 : %1f\n", MyCircle.origin.PosX, MyCircle.origin.PosY, MyCircle.radius);

	ClaculateCircleInfo(MyCircle);

	printf("=================================================\n");

	char playerName[10] = "간짜장";	// 플레이어 이름
	int playerBasicLv = 1;			// 플레이어의 기본 레벨
	int ItemLv = 5;					// 아이템의 기본 레벨
	int ItemPower = 7;				// 아이템의 공격력
	char ItemName[10] = "장미칼";	// 아이템의 이름

	int* playerBasicLvptr = &playerBasicLv;
	int* ItemLvptr = &ItemLv;
	int* ItemPowerptr = &ItemPower;

/*	int* playerBasicLv = &playerBasicLv; 
	int* ItemLv = &ItemLv;               
	int* ItemPower = &ItemPower;  */       

	// 헤더파일이나 메인에서 구조체를 만들고 메인에다가 선언할 때 선언한 구조체와 구조체명을 꼭 써야한다!
	// 헤더에서 선언한 구조체 안 값들과 메인에서 쓸때 구조체 안 값들의 순서가 모두 일치해야한다. (매우 중요)
	Player myPlayer = { playerName, 0,0, &playerBasicLv, ItemName, &ItemLv , &ItemPower };

	ShowPlayerCurrentPos(myPlayer);
}

void ClaculateCircleInfo(Circle circle)
{
	// 호의 길이 : 2 * PI & R
	printf("호의 길이 : %1f\n", 2 * 3.14 * circle.radius);
	printf("원의 넓이 : %1f\n", 0.5 * 3.14 * circle.radius * circle.radius);
	printf("원점의 위치 : [%d, %d]\n", circle.origin.PosX, circle.origin.PosY);
}

void ShowPlayerCurrentPos(Player player)	// 플레이어의 현재 위치를 보여주는 함수
{
	// 플레이어의 이름
	printf("플레이어의 이름 : %s\n", player.playerName);
	// 플레이어의 위치
	printf("플레이어의 현재 위치 : [%d, %d]\n", player.playerPos.PosX, player.playerPos.PosY);
	// 시작시 플레이어의 기본 레벨
	printf("플레이어의 기본 레벨 : %dLv\n", *player.playerBasicLv);
	// 아이템 이름
	printf("아이템의 이름 : %s\n", player.ItemName);
	// 아이템의 기본 레벨
	printf("아이템의 레벨 : %dLv\n", *player.ItemLv);
	// 아이템의 공격력
	printf("아이템의 공격력: %d\n", *player.ItemPower);
}
