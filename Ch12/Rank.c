#pragma once
#include "Rank.h"

void FileSaveTemp()		// 파일 저장하는 예제 함수
{
	FILE* fp = fopen(RANKFILEPATH, "w");	// 뒤에 쓸건지 읽어올건지 생각해서 사용해야 한다.
	// fputc	작은 따옴표를 사용한다.
	/*fputc('a', fptr);
	fputc('\n', fptr);
	fputc('a', fptr);
	fputc('a', fptr);*/
	// fputs	문자열로 저장하며 큰 따옴표를 사용한다. 
	//fputs("aaa", fptr);
	// fprintf
	fprintf(fp, "%d %d %s\n", 1, 100, "Amy");
	fclose(fp);
}

void FileSave(const char* FileName, Rank rank[], int count)
{
	FILE* fptr = fopen(FileName, "w");

	for (int i = 0; i < count; i++)
	{
		fprintf(fptr, "%d %d %s\n", rank[i].order, rank[i].score, rank[i].name);

	}
	fclose(fptr);
}

void FileLoadTemp()
{
	FILE* fp2 = fopen("Text.txt", "r");

	/*char mstring[12];
	fgets(mstring, 12, fp2);
	printf("%s\n", mstring);*/

	int order = 0;
	int score = 0;

	char name[MAXLENGTH];

	fscanf(fp2, "%d %d %49s", &order, &score, name);

	printf("순서: %d, 점수 : %d, 이름 : %s\n", order, score, name);

	fclose(fp2);
}

int LoadRank(const char* FileName, Rank rank[])
{
	int count = 0;

	FILE* fptr = fopen(FileName, "r");

	if (fptr == NULL)
	{
		printf("파일 열기 실패\n");
		return;
	}

	while (true)
	{
		if (fscanf(fptr, "%d %d %49s", &rank[count].order, &rank[count].score, rank[count].name) == EOF)	// 파일이 끝날때까지 읽어오는 코드 
		{
			break;
		}

		count++;
	}
	fclose(fptr);

	return count;
}

void PrintRanking(Rank rank[], int count)
{
	// 테두리 만들기
	printf("+------+----------+------------------+\n");
	printf("| 순서 | 점수     |     이름         |\n");
	printf("+------+----------+------------------+\n");
	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d     | %16s |\n", i + 1, rank[i].score, rank[i].name);	// 등수, 점수, 이름 순
		printf("+------+----------+------------------+\n");
	}
}

void AddRank(Rank rank[], int* order, const char* name, int score)
{
	if (*order < MAXRANK)
	{
		rank[*order].order = *order + 1;	// [] 속 숫자는 순서
		rank[*order].score = score;
		strncpy(rank[*order].name, name, MAXLENGTH - 1);
		rank[*order].name[MAXLENGTH - 1] = '\0';
		(*order)++;

	}
	else
	{
		printf("최다 플레이어 저장 수를 초과하였습니다.\n");
	}
}

void AddRankData(Rank rank[], int* order)
{
	if (*order < MAXRANK)	// if문 조건 안의 order는 주소이기 때문에 *을 붙여야한다. 
	{
		printf("새로운 이름을 입력하세요.\n");
		char newName[MAXLENGTH];
		int newScore;

		scanf("%49s", newName);
		printf("점수를 입력하세요.\n");
		scanf("%d", &newScore);

		AddRank(rank, order, newName, newScore);	// 여기에서는 이미 order가 주소이기 때문에 &를 붙이지 않는다.
	}
}

void DeleteRankData(Rank rank[], int* order, int index)
{
	// 주의할 점
	// 1. order가 배열의 순서이므로 -1을 해줘야 한다. 
	// 2. 지우고 싶은 순서를 전달해줘야 한다. 
	if (index < 0)			// 인덱스가 0보다 작거나 같으면 에러
	{
		printf("랭킹에 데이터가 등록되어 있지 않습니다.\n");
		return;
	}
	if (index >= *order)	// 인덱스 수가 오더의 개수보다 크거나 같으면 에러
	{
		printf("잘못된 인덱스 입니다.\n");
		return;
	}

	for (int i = index; i < *order - 1; i++)
	{
		rank[i] = rank[i + 1];
	}

	(*order)--;		// 데이터를 삭제했기 때문에 현재 데이터의 총 개수를 1 감소 시킨다. 

}

int FindMaxIndex(Rank rank[], int size)
{
	int index = 0;

	// 랭크 데이터 안애서 점수가 가장 큰 인덱스를 찾아 인덱스 변수에 저장하고 변환한다.

	int Maxvalue = rank[0].score;		// 처음 데이터를 읽어왔을 때 가장 큰수는 첫번째 데이터이다. 

	for (int i = 1; i < size; i++)
	{
		if (rank[i].score > Maxvalue)
		{
			Maxvalue = rank[i].score;
			index = i;
		}

	}


	return index;
}


