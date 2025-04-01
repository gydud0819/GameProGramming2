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
	printf("1. ������ �����ϴ� �Լ� �����\n");
	//SaveFileTemp();
	printf("2. ������ �о���� �Լ� �����\n");
	FileLoadTemp();
	printf("3. ��ũ ����ü �����ϱ�\n\n");
	
	Rank ranks[MAXRANK];
	int order = 0;

	AddRank(ranks, &order, "Bears", 500);
	AddRank(ranks, &order, "Twins", 450);
	AddRank(ranks, &order, "Tigers", 254);
	AddRank(ranks, &order, "Dinos", 444);
	AddRank(ranks, &order, "Lions", 768);
	AddRank(ranks, &order, "Heros", 198);





	//order = LoadRank(RANKFILEPATH, ranks);
	
	/*count++;
	ranks[0].order = count;
	ranks[0].score = 100;
	strncpy(ranks[0].name, "Bob", MAXLENGH);

	count++;
	ranks[1].order = count;
	ranks[1].score = 100;
	strncpy(ranks[1].name, "Chloe", MAXLENGH);*/
	if (order < MAXRANK)
	{
		printf("���ο� �÷��̾��� �̸��� �Է��ϼ���.\n");
		char newName[MAXLENGH];
		int newScore;

		scanf("%49s", newName);
		printf("������ �Է��ϼ��� :\n");
		scanf("%d", &newScore);

		AddRank(ranks, &order, newName, order);
	}
	PrintRanking(ranks, order);

	SaveFile(RANKFILEPATH, ranks, order);
}

