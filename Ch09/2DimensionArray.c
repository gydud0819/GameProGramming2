#include "2DimensionArray.h"



void ShowLecture()
{
	printf("2���� �迭\n\n");

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

	// array1�� �� ���� = ���� * ����

	printf("%d ", array1[0][0]);
	printf("%d\n", array1[0][1]);
	printf("%d ", array1[1][0]);
	printf("%d\n", array1[1][1]);

	printf("%d ", array1[2][0]);
	printf("%d\n", array1[2][1]);
	printf("%d ", array1[3][0]);
	printf("%d\n", array1[3][1]);

	printf("�ݺ������� ǥ���� 2���� �迭\n");

	// for �ݺ������� ǥ���غ���
	// ���θ� 1���� �迭�̶� �����ϰ� �ݺ������� ǥ���غ���
	for (int c = 0; c < COL; c++)	// c�� ���� col�� ���� ��
	{
		for (int r = 0; r < ROW; r++)	// r�� ���� row�� ���� ��
		{
			printf("%d ", array1[c][r]);
		}

		printf("\n");
	}

	// ����
	// ���� �ѹ� : �ɺ��� ���, ��ó�������� �������ָ� ����.
	// const int COL_SIZE

	printf("array2 for������ �ۼ��ϱ�\n");
	for (int c = 0; c < 2; c++)
	{
		for (int r = 0; r < 4; r++)
		{
			printf("%d ", array2[c][r]);
		}

		printf("\n");
	}

	// char[][] char (*ptr)[����];
	// ���ڸ� ������ Ÿ������ �ϴ� 2���� �迭�� �����
	// 4x5 ũ���� �� ����� '#'�� �̿��ؼ� 

	printf("��1 ����ϱ�\n");
	char map1[4][5] =
	{
		{'#','#','#','#','#'},	//	"#####"�� ǥ���� �� ������?
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
	//char* map2[4];				// char* ������ �迭 

	char stage1[5][6 + 1] =
	{
		"######",		// ���ڿ��� ���������� '\0'�� �ֱ� ������ + 1 �� �Ѵ�.  
		"#    #",		
		"#    #",		
		"#    #",		
		"######",		

	};

	printf("stage1 ���\n");
	for (int c = 0; c < 5; c++)
	{
		for (int r = 0; r < 7; r++)
		{
			printf("%c", stage1[c][r]);
		}

		printf("\n");
	}

	
}