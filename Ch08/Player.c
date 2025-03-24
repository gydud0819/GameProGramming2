#include "Player.h"

// 1. 문자 주소로 전달
// 2. 구조체 -> 문자 주소 전달

/*
* string.h
* 
* strcpy_s
*/

void SetPlayerName(char* playerNameptr)
{
	printf("사용할 이름을 입력해주세요.\n");
	
	char input[20];

	scanf_s("%s", input, 20);

	strcpy_s(playerNameptr, 20, input);	// 저장된 문자열의 주소, 가져올 문자열의 주소 

}

void SetPlayer(Player* player, const char* Name)
{
	// 예외 처리
	// 사용하는 사람이 실수하는 것을 방지한다.
	if (player == NULL)
	{
		printf("[경고] 플레이어에 주소를 입력해주세요.\n");
		return;
	}

	strcpy_s(player->playerName, NAMELENGTH, Name);

}

void ShowPlayerInfo(Player* player)
{
	printf("플레이어의 이름 : %s", player->playerName);
}
