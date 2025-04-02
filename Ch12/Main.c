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
	/*printf("1. 파일을 저장하는 함수 만들기\n");
	FileSaveTemp();
	printf("2. 파일을 읽어오는 함수 만들기\n");
	FileLoadTemp();
	printf("3. 랭크 구조체 구현하기\n\n");*/

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

	// 1. 데이터 파일을 로드하는 화면을 구성한다. 

	printf("데이터를 불러오는 중입니다.\n");

	for (int i = 0; i < 5; i++)
	{
		printf("----------");
		Sleep(100);

	}
	printf("----------------------------\n");
	Sleep(1000);
	order = LoadRank(RANKFILEPATH, ranks);		// 메모장에 띄어쓰기 하지 않기 할거면 _ 사용하기
	printf("로딩이 완료되었습니다. 키를 입력해주세요.\n");
	_getch();
	system("cls");

	int firstRank = 0;

	while (true)
	{
		printf("1. 랭킹 추가 2. 랭킹 확인 3. 프로그램 종료 4. 랭킹 데이터 삭제 5. 1위의 정보 출력하기\n");
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
			printf("랭킹 1위의 이름 : %s, 점수 : %d\n", ranks[firstRank].name, ranks[firstRank].score);
			break;
		default:
			printf("잘못된 입력입니다. 키를 입력해주세요.\n");
			_getch();
			system("cls");
			break;
		}
	}

	

	//PrintRanking(ranks, order);	// 데이터를 보여주는 함수
	//AddRankData(ranks, &order);
	//system("cls");
	//PrintRanking(ranks, order);	// 데이터를 보여주는 함수




}

