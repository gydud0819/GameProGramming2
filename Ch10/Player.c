#include "Player.h"

void GetPlayerName(Player player)
{
	//printf("플레이어 이름: %s", player.name);
}

void SetPlayerName(Player* playerptr)
{
	char* inputName = malloc(sizeof(inputName));
	scanf_s("%s", inputName, 10);
	(*playerptr).name = inputName;

	free(inputName);
}

void SelectColor(Color color)
{
	{
		switch (color)
		{
		case RED:
			printf("레드입니다.\n");
			break;
		case GREEN:
			printf("그린입니다.\n");
			break;
		case BLUE:
			printf("블루입니다.\n");
			break;
		default:
			break;
		}
	}
}

void SetPlayerInput(Player* playerptr)
{
	// 플레이어의 입력을 판별한다. 4방향 return
	// 방향 enum 0: 왼쪽, 1: 오른쪽, 2: 위, 3: 아래
	// enum 값
	
	playerptr->pos.X += 1;

	if (_kbhit)
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			(*playerptr).pos.X -= 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			(*playerptr).pos.X += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			(*playerptr).pos.Y -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			(*playerptr).pos.Y += 1;
		}
	}
}

void ShowPlayerInfo(Player* playerptr)
{
	// 이름, 좌표, 종족


	if (playerptr == NULL)
	{
		return;
	}

	printf("%s ", playerptr->name);
	//GetPlayerName(*playerptr);		// 함수로 호출할 때는 역참조해서 불러오면 된다. 
	
}
