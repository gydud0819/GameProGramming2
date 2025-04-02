/*
* ���� : ���� �����
* 1. fopen();, fclose();, FILE* fptr;
* 2. ���� : fputc, fputs		// fprintf()
* 3. �ε� : fgetc, fgets		// fscanf()
* 4. ����ü�� �̿��ؼ� �����͸� �����ϰ� ���� ��
*/
#include "Rank.h"

int main()
{
	/*printf("1. ������ �����ϴ� �Լ� �����\n");
	FileSaveTemp();
	printf("2. ������ �о���� �Լ� �����\n");
	FileLoadTemp();
	printf("3. ��ũ ����ü �����ϱ�\n\n");*/

	Rank ranks[MAXRANK];
	int order = 0;

	/*AddRank(ranks, &order, "KIA Tigers", 12);
	AddRank(ranks, &order, "Samsung Lions", 8);
	AddRank(ranks, &order, "Doosan Bears", 6);
	AddRank(ranks, &order, "SSG Landers", 5);
	AddRank(ranks, &order, "LG Twins", 3);
	AddRank(ranks, &order, "Lotte Giants", 2);
	AddRank(ranks, &order, "Hanwha Eagles", 1);
	AddRank(ranks, &order, "NC Dinos", 1);
	AddRank(ranks, &order, "Kt wiz", 1);
	AddRank(ranks, &order, "Kiwoom Heroes", 0);*/

	// 1. ������ ������ �ε��ϴ� ȭ���� �����Ѵ�. 

	printf("�����͸� �ҷ����� ���Դϴ�.\n");

	for (int i = 0; i < 5; i++)
	{
		printf("----------");
		Sleep(100);

	}
	printf("----------------------------\n");
	Sleep(1000);
	order = LoadRank(RANKFILEPATH, ranks);		// �޸��忡 ���� ���� �ʱ� �ҰŸ� _ ����ϱ�
	printf("�ε��� �Ϸ�Ǿ����ϴ�. Ű�� �Է����ּ���.\n");
	_getch();
	system("cls");

	int firstRank = 0;

	while (true)
	{
		printf("1. ��ŷ �߰� 2. ��ŷ Ȯ�� 3. ���α׷� ���� 4. ��ŷ ������ ���� 5. 1���� ���� ����ϱ�\n");
		int input = 0;
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			AddRankData(ranks, &order);
			break;
		case 2:
			PrintRanking(ranks, order);
			break;
		case 3:
			FileSave(RANKFILEPATH, ranks, order);
			return;
		case 4:
			DeleteRankData(ranks, order, 2);
			break;
		case 5:
			
			firstRank = FindMaxIndex(ranks, order);
			printf("��ŷ 1���� �̸� : %s, ���� : %d\n", ranks[firstRank].name, ranks[firstRank].score);
			break;
		default:
			printf("�߸��� �Է��Դϴ�. Ű�� �Է����ּ���.\n");
			_getch();
			system("cls");
			break;
		}
	}

	

	//PrintRanking(ranks, order);	// �����͸� �����ִ� �Լ�
	//AddRankData(ranks, &order);
	//system("cls");
	//PrintRanking(ranks, order);	// �����͸� �����ִ� �Լ�




}

