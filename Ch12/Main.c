/*
* 복습 : 파일 입출력
* 1. fopen();, fclose();, FILE* fptr;
* 2. 저장 : fputc, fputs		// fprintf()
* 3. 로드 : fgetc, fgets		// fscanf()
* 4. 구조체를 이용해서 데이터를 저장하고 싶을 때
*/
#include "Rank.h"

int main()
{
	printf("1. 파일을 저장하는 함수 만들기\n");
	//SaveFileTemp();
	printf("2. 파일을 읽어오는 함수 만들기\n");
	FileLoadTemp();
	printf("3. 랭크 구조체 구현하기\n\n");
	
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
		printf("새로운 플레이어의 이름을 입력하세요.\n");
		char newName[MAXLENGH];
		int newScore;

		scanf("%49s", newName);
		printf("점수를 입력하세요 :\n");
		scanf("%d", &newScore);

		AddRank(ranks, &order, newName, order);
	}
	PrintRanking(ranks, order);

	SaveFile(RANKFILEPATH, ranks, order);
}

