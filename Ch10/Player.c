#include "Player.h"

void GetPlayerName(Player player)
{
	printf("�÷��̾� �̸�: %s", player.name);
}

void SetPlayerName(Player* playerptr)
{
	printf("�÷��̾��� �̸��� �Է����ּ���.\n");
	char* inputName = malloc(sizeof(inputName));
	scanf_s("%s", inputName, 10);
	playerptr->name = inputName;


	//free(inputName);		// �̰� �� ���� �ȴ�??????? 
}


void SetPlayerInput(Player* playerptr)
{
	// �÷��̾��� �Է��� �Ǻ��Ѵ�. 4���� return
	// ���� enum 0: ����, 1: ������, 2: ��, 3: �Ʒ�
	// enum ��

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

void SetPlayerRace(Player* playerptr)	// ���� ���� �Լ�
{
	printf("�÷��̾��� ������ �������ּ���.\n");
	printf("1. Human 2. Orc 3. Troll\n");
	int inputNumber = -1;
	scanf_s("%d", &inputNumber);

	switch (inputNumber)
	{
	case 0:
		playerptr->race = HUMAN;
			return;		// �Լ��� �����ϰ��Ѵ�. 
	case 1:
		playerptr->race = ORC;
		return;
	case 2:
		playerptr->race = TROLL;
		return;
	default:
		SetPlayerRace(playerptr);		// �߸��� ��ȣ�� ������ ���� �ڵ尡 �ٽ� �ߵ��� ���ش�.
	}

}

void SetPlayer(Player* playerptr)
{
	SetPlayerName(playerptr);
	//SetPlayerInput(playerptr);
	SetPlayerRace(playerptr);
	
	printf("�÷��̾� ������ �Ϸ�Ǿ����ϴ�. �����Ϸ��� �ƹ���ư�̳� �����ּ���.\n");
	_getch();
	system("cls");



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

void ShowPlayerInfo(Player* playerptr, COORD UIPos)
{
	GotoXY(UIPos.X, UIPos.Y);
	printf("�÷��̾��� ����");
	GotoXY(UIPos.X, UIPos.Y + 1);
	printf("�̸� : %s", playerptr->name);
	GotoXY(UIPos.X, UIPos.Y + 2);
	printf("��ǥ : [%d, %d]", playerptr->pos.X, playerptr->pos.Y);
	GotoXY(UIPos.X, UIPos.Y + 3);
	printf("������ �ش��ϴ� ���ڸ� ����Ѵ�. (1�� �� HUMAN, 2�� �� OLC, 3�� �� TROLL) : %d", playerptr->race);
}


