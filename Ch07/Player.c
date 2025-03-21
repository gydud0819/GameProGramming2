#include "Player.h"

void PlayerInputKey(Player* playerptr)
{
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			// 플레이어의 x값을 변경한다.
			playerptr->pos.X -= 2;		// x는 2칸으로 설정해야 down키를 눌렀을때랑 속도가 같아진다.
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			// 플레이어의 x값을 변경한다.
			playerptr->pos.X += 2;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			// 플레이어의 y값을 변경한다.
			playerptr->pos.Y -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			// 플레이어의 y값을 변경한다.
			playerptr->pos.Y += 1;
		}
	}
}

// Windows.h 에 있다.
void ShowPlayer(const Player* playerptr)
{
	// x,y좌표로 이동해서 출력한다.
	MoveXY2(playerptr->pos);
	printf("★");
}

void InteractWithItem(Player* playerptr, Item* itemptr)
{
	// 플레이어와 아이템 좌표가 각각의 x,y와 비교해서 두 좌표가 일치하면 아이템 안에 있는 hasItem을 true로 변경해주는 코드 작성
	//if (playerptr->pos.X == itemptr->pos.X && playerptr->pos.Y == itemptr->pos.Y)
	//{
	//	itemptr->hasItem = true;	// 아이템 구조체 안에 bool hasItem이 있기 때문에 주소로 받아와서 두 좌표가 일치할 때 true로 변경해준다.? 
	//}

	// 1. 플레이어 주소로부터 좌표를 가져온다. playerptr->pos
	// 2. 아이템 주소로부터 좌표를 가져온다.  itemptr->pos

	if (ComPareCOORD(playerptr->pos, itemptr->pos))
	{
		itemptr->hasItem = true;

		
	}
}

void ShowplayerItemInfo(Item* itemptr)
{
	// 모든 아이템을 탐색해서 hasItemTrue인 정보를 보여준다.

	//printf("아이템을 소지하고 있습니다.");

	if (itemptr->hasItem)
	{
		printf("%s 을(를) 획득했습니다.", itemptr->itemName);

	}
}

void ShowAllPlayerItemInfo(Item* itemArray, int length)
{
	for (int i = 0; i < length; i++)
	{
		//itemArray + i;		// 배열의 시작 주소에서 i 데이터 크기만 더해라
							// hasItem == true 일때 실행
		if ((itemArray+i)->hasItem == true)
		{
			printf("%s 을(를) 획득했습니다.", (itemArray+i)->itemName);
		}
		else
		{
			printf("%s 아이템 미보유 상태 입니다.", (itemArray+i)->itemName);

		}
	}
}

void GotoXY2(int posX, int posY)
{
	COORD pos = { posX, posY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void MoveXY2(COORD pos)
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

BOOL ComPareCOORD(COORD pos1, COORD pos2)
{
	// pos1의 x, pos2의 x를 비교
	// pos1의 y, pos2의 y를 비교
	// 둘다 같으면 true	&&
	// 다르면 false 반환		return ture, false;

	if (pos1.X == pos2.X && pos1.Y == pos2.Y)
	{
		return true;
	}
	else
	{
		return false;
	}
}
