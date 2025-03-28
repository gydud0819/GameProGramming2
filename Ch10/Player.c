#include "Player.h"

void GetPlayerName(Player player)
{
	printf("플레이어 이름: %s", player.name);
}

void SetPlayerName(Player* playerptr)
{
	printf("플레이어의 이름을 입력해주세요.\n");
	char* inputName = malloc(sizeof(inputName));
	scanf_s("%s", inputName, 10);
	playerptr->name = inputName;


	//free(inputName);		// 이거 왜 쓰면 안댐??????? 
}


void SetPlayerInput(Player* playerptr)
{
	// 플레이어의 입력을 판별한다. 4방향 return
	// 방향 enum 0: 왼쪽, 1: 오른쪽, 2: 위, 3: 아래
	// enum 값

	//playerptr->pos.X += 1;

	if (_kbhit)
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			playerptr->pos.X -= 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			playerptr->pos.X += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			playerptr->pos.Y -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			playerptr->pos.Y += 1;
		}
	}
}

void SetPlayerRace(Player* playerptr)	// 종족 설정 함수
{
	printf("플레이어의 종족을 선택해주세요.\n");
	printf("1. Human 2. Orc 3. Troll\n");
	int inputNumber = -1;
	scanf_s("%d", &inputNumber);

	switch (inputNumber)
	{
	case 0:
		playerptr->race = HUMAN;
			return;		// 함수를 종료하게한다. 
	case 1:
		playerptr->race = ORC;
		return;
	case 2:
		playerptr->race = TROLL;
		return;
	default:
		SetPlayerRace(playerptr);		// 잘못된 번호를 누르면 위의 코드가 다시 뜨도록 해준다.
	}

}

void SetPlayer(Player* playerptr)
{
	SetPlayerName(playerptr);
	//SetPlayerInput(playerptr);
	SetPlayerRace(playerptr);
	
	printf("플레이어 설정이 완료되었습니다. 진행하려면 아무버튼이나 눌러주세요.\n");
	_getch();
	system("cls");



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

void ShowPlayerInfo(Player* playerptr, COORD UIPos)
{
	GotoXY(UIPos.X, UIPos.Y);
	printf("플레이어의 정보");
	GotoXY(UIPos.X, UIPos.Y + 1);
	printf("이름 : %s", playerptr->name);
	GotoXY(UIPos.X, UIPos.Y + 2);
	printf("좌표 : [%d, %d]", playerptr->pos.X, playerptr->pos.Y);
	GotoXY(UIPos.X, UIPos.Y + 3);
	printf("종족에 해당하는 숫자를 출력한다. (1일 때 HUMAN, 2일 때 OLC, 3일 때 TROLL) : %d", playerptr->race);
}


