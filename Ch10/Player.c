#include "Player.h"

void GetPlayerName(Player player)
{
	//printf("�÷��̾� �̸�: %s", player.name);
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
			printf("�����Դϴ�.\n");
			break;
		case GREEN:
			printf("�׸��Դϴ�.\n");
			break;
		case BLUE:
			printf("����Դϴ�.\n");
			break;
		default:
			break;
		}
	}
}

void SetPlayerInput(Player* playerptr)
{
	// �÷��̾��� �Է��� �Ǻ��Ѵ�. 4���� return
	// ���� enum 0: ����, 1: ������, 2: ��, 3: �Ʒ�
	// enum ��
	
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
	// �̸�, ��ǥ, ����


	if (playerptr == NULL)
	{
		return;
	}

	printf("%s ", playerptr->name);
	//GetPlayerName(*playerptr);		// �Լ��� ȣ���� ���� �������ؼ� �ҷ����� �ȴ�. 
	
}
