#include "2DimensionArray.h"



void ShowLecture()
{
	printf("2차원 배열\n\n");

	int array1[4][2] =
	{
		{0,1},
		{1,1},
		{1,0},
		{1,1},

	};

	int array2[2][4] =
	{
		{0,1,1,0},
		{1,0,0,0},
	};

	// array1의 총 개수 = 가로 * 세로

	printf("%d ", array1[0][0]);
	printf("%d\n", array1[0][1]);
	printf("%d ", array1[1][0]);
	printf("%d\n", array1[1][1]);

	printf("%d ", array1[2][0]);
	printf("%d\n", array1[2][1]);
	printf("%d ", array1[3][0]);
	printf("%d\n", array1[3][1]);

	printf("반복문으로 표현한 2차원 배열\n");

	// for 반복문으로 표현해보기
	// 가로만 1차원 배열이라 생각하고 반복문으로 표현해보기
	for (int c = 0; c < COL; c++)	// c는 세로 col을 줄인 것
	{
		for (int r = 0; r < ROW; r++)	// r은 가로 row를 줄인 것
		{
			printf("%d ", array1[c][r]);
		}

		printf("\n");
	}

	// 변수
	// 매직 넘버 : 심볼릭 상수, 전처리문으로 설정해주면 좋다.
	// const int COL_SIZE

	printf("array2 for문으로 작성하기\n");
	for (int c = 0; c < 2; c++)
	{
		for (int r = 0; r < 4; r++)
		{
			printf("%d ", array2[c][r]);
		}

		printf("\n");
	}

	// char[][] char (*ptr)[길이];
	// 문자를 데이터 타입으로 하는 2차원 배열을 만들기
	// 4x5 크기의 맵 만들기 '#'을 이용해서 

	printf("맵1 출력하기\n");
	char map1[4][5] =
	{
		{'#','#','#','#','#'},	//	"#####"로 표현할 수 있을까?
		{'#',' ',' ', ' ','#'},
		{'#',' ',' ', ' ','#'},
		{'#','#','#','#','#'},
	};

	for (int c = 0; c < 4; c++)
	{
		for (int r = 0; r < 5; r++)
		{
			printf("%c", map1[c][r]);
		}

		printf("\n");
	}
	//char* map2[4];				// char* 포인터 배열 

	char stage1[5][6 + 1] =
	{
		"######",		// 문자열의 마지막에는 '\0'이 있기 때문에 + 1 을 한다.  
		"#    #",		
		"#    #",		
		"#    #",		
		"######",		

	};

	printf("stage1 출력\n");
	for (int c = 0; c < 5; c++)
	{
		for (int r = 0; r < 7; r++)
		{
			printf("%c", stage1[c][r]);
		}

		printf("\n");
	}

	
}