#include "struct.h"

void StructExample()
{
	// 플레이어의 정보를 만들어본다. (1. 플레이어의 위치값)

	struct Pos playerPos = { 1,1 };
	
	// 플레이어의 좌표를 출력해주세요.
	// 접근 연산자(.) - 내부의 데이터에 접근할 수 있다.

	printf("[%d, %d]\n", playerPos.PosX, playerPos.PosY);

	Pos origin1 = { 0,0 };
	struct Circle MyCircle = { origin1, 2.5 };

	printf("원점 : [%d, %d], 반지름 : %1f\n", MyCircle.origin.PosX, MyCircle.origin.PosY, MyCircle.radius);

	ClaculateCircleInfo(MyCircle);

	char playerName[10] = "player01";
	//Player myPlayer = {};
	//ShowPlayerCurrentPos();
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
	struct player *playerName = "player01";
	// 플레이어의 이름
	printf("플레이어의 이름 : %s", player.playerName);
	// 플레이어의 위치
	printf("플레이어의 현재 위치 : [%d, %d]", player.playerPos.PosX, player.playerPos.PosY);
}
