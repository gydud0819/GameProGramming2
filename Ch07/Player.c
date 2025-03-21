#include "Player.h"

void PlayerInputKey(Player* playerptr)
{
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			// �÷��̾��� x���� �����Ѵ�.
			playerptr->pos.X -= 2;		// x�� 2ĭ���� �����ؾ� downŰ�� ���������� �ӵ��� ��������.
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			// �÷��̾��� x���� �����Ѵ�.
			playerptr->pos.X += 2;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			// �÷��̾��� y���� �����Ѵ�.
			playerptr->pos.Y -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			// �÷��̾��� y���� �����Ѵ�.
			playerptr->pos.Y += 1;
		}
	}
}

// Windows.h �� �ִ�.
void ShowPlayer(const Player* playerptr)
{
	// x,y��ǥ�� �̵��ؼ� ����Ѵ�.
	MoveXY2(playerptr->pos);
	printf("��");
}

void InteractWithItem(Player* playerptr, Item* itemptr)
{
	// �÷��̾�� ������ ��ǥ�� ������ x,y�� ���ؼ� �� ��ǥ�� ��ġ�ϸ� ������ �ȿ� �ִ� hasItem�� true�� �������ִ� �ڵ� �ۼ�
	//if (playerptr->pos.X == itemptr->pos.X && playerptr->pos.Y == itemptr->pos.Y)
	//{
	//	itemptr->hasItem = true;	// ������ ����ü �ȿ� bool hasItem�� �ֱ� ������ �ּҷ� �޾ƿͼ� �� ��ǥ�� ��ġ�� �� true�� �������ش�.? 
	//}

	// 1. �÷��̾� �ּҷκ��� ��ǥ�� �����´�. playerptr->pos
	// 2. ������ �ּҷκ��� ��ǥ�� �����´�.  itemptr->pos

	if (ComPareCOORD(playerptr->pos, itemptr->pos))
	{
		itemptr->hasItem = true;

		
	}
}

void ShowplayerItemInfo(Item* itemptr)
{
	// ��� �������� Ž���ؼ� hasItemTrue�� ������ �����ش�.

	//printf("�������� �����ϰ� �ֽ��ϴ�.");

	if (itemptr->hasItem)
	{
		printf("%s ��(��) ȹ���߽��ϴ�.", itemptr->itemName);

	}
}

void ShowAllPlayerItemInfo(Item* itemArray, int length)
{
	for (int i = 0; i < length; i++)
	{
		//itemArray + i;		// �迭�� ���� �ּҿ��� i ������ ũ�⸸ ���ض�
							// hasItem == true �϶� ����
		if ((itemArray+i)->hasItem == true)
		{
			printf("%s ��(��) ȹ���߽��ϴ�.", (itemArray+i)->itemName);
		}
		else
		{
			printf("%s ������ �̺��� ���� �Դϴ�.", (itemArray+i)->itemName);

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
	// pos1�� x, pos2�� x�� ��
	// pos1�� y, pos2�� y�� ��
	// �Ѵ� ������ true	&&
	// �ٸ��� false ��ȯ		return ture, false;

	if (pos1.X == pos2.X && pos1.Y == pos2.Y)
	{
		return true;
	}
	else
	{
		return false;
	}
}
