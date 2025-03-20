#include "StructPointer.h"	// 확장자 파일을 가져오라는 의미

void Ch6Example()
{
	printf("ch6");

	POS playerPos = { 5,5 };
	playerPos.posX = 3;
	playerPos.posY = 4;

	Player player1 = { "SSS", playerPos };

	//printf("플레이어의 이름 : %s, 플레이어의 현재 위치 : [%d, %d]", player1.PlayerName, player1.playerPos, 
	//	player1.playerPos.posX, player1.playerPos.posY);

	//ShowPlayerInfo1(player1);	// 변수를 그대로 전달

	//ShowPlayerInfo2(&player1);	// 주소를 전달
	
	ChangePlayerPos(&player1);
	ShowPlayerInfo3(&player1);	// 주소를 전달

}

void ShowPlayerInfo1(Player player1)	// 변수로 작성한 구조체 코드
{
	printf("플레이어의 이름 : %s, 플레이어의 현재 위치 : [%d, %d]", 
		player1.playerName, player1.playerPos.posX, player1.playerPos.posY);
}

void ShowPlayerInfo2(const Player* playerptr)	// 더 효율적인 코드이다.
{
	printf("플레이어의 이름 : %s, 플레이어의 현재 위치 : [%d, %d]",
		(*playerptr).playerName, (*playerptr).playerPos.posX, (*playerptr).playerPos.posY);
	(*playerptr).playerName;	// const 선언을 했기 때문에 ()를 붙여줘야 한다.
}

void ShowPlayerInfo3(const Player* playerptr)
{
	printf("플레이어의 이름 : %s, 플레이어의 현재 위치 : [%d, %d]",
		playerptr->playerName, playerptr->playerPos.posX, playerptr->playerPos.posY);
	playerptr->playerName;
}

void ChangePlayerPos(Player* playerptr)
{
	playerptr->playerPos.posX += 1;
	playerptr->playerPos.posY += 1;
}
