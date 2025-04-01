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
	FileSaveTemp();
	printf("2. ������ �о���� �Լ� �����\n");
	FileLoadTemp();
	printf("3. ��ũ ����ü �����ϱ�\n\n");
	
	Rank ranks[MAXRANK];
	int order = 0;

	AddRank(ranks, &order, "NC Dinos", 1);
	AddRank(ranks, &order, "LG Twins", 3);
	AddRank(ranks, &order, "Doosan Bears", 6);
	AddRank(ranks, &order, "KIA Tigers", 12);
	AddRank(ranks, &order, "Kt wiz", 1);
	AddRank(ranks, &order, "Hanwha Eagles", 1);
	AddRank(ranks, &order, "Samsung Lions", 8);
	AddRank(ranks, &order, "Kiwoom Heroes", 0);
	AddRank(ranks, &order, "SSG Landers", 5);
	AddRank(ranks, &order, "Lotte Giants", 2);

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
		printf("���ο� ���� �̸��� �Է��ϼ���.\n");
		char newName[MAXLENGTH];
		int newScore;

		scanf("%49s", newName);
		printf("���Ƚ���� �Է��ϼ���.\n");
		scanf("%d", &newScore);

		AddRank(ranks, &order, newName, newScore);
	}
	PrintRanking(ranks, order);	// ��ŷ ������ ���

	FileSave(RANKFILEPATH, ranks, order);
}

