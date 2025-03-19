/*
* �ۼ���	: 2025-03-19
* �ۼ���	: ��ȿ��
* ����	: ����ü�� ���� ����
*/
/*
* ���� �ð� ���� : �迭�� ������
* | ���								|	   �迭		|  ������	|
* |	�̸��� �����ϴ°�?				|     O			|	O		|
* | ������ �����ϴ°�?				|	���� �ּ�	|	�ּ�		|
* | �ּҰ��� ���氡���Ѱ�?			|	  X			|	O		|
*/

/*
* ��� ������ : �ּҾ��� ���� �������� ����� ��?
* const 
*/

#include <stdio.h>
#include "struct.h"

// array�ּ��� ���� �������� �����ּ���
void showAllData(const int* array, int length)	// �迭�� �����ͼ� �����͸� ���� �ʹ�. -> �迭�� �����ͼ� ���� �ٲٴ� �Լ��ΰ�?
{
	for (int i = 0; i < length; i++)
	{
		// array[i] += 1;
		printf("%d ", array[i]);
	}
}

// �߸��� ����
void ShowData(const int* num1ptr)	// num1ptr�� ����ִ� ���� �������� �����ּ���.
{
	int* rptr = num1ptr;	// rptr, num1ptr�ּ��� ���� �����Ѵ�.
	*rptr += 2;				// num1ptr�� ����ִ� ���� ����ȴ�.

	printf("%d \n", *num1ptr);
	printf("=================================================\n");
}

// Item�� �̸��� ����ϴ� �Լ��� �����ϱ� (��, �̸��� ���� ����Ǹ� �ȵȴ�.) �׷����� �ұ��ϰ� �ٲٰ� �ʹٸ�? �Լ��� ���� ���� �ٲ۴�.
void ShowItemData(char* ItemName)
{
	//*ItemName = "�ұݻ�";		// ItemName�� �����Ͽ� ���� �������� ���ϰ� �Ѵ�. 
	printf("������ �̸� : %s\n", ItemName);
	printf("=================================================\n");
}

int main()
{
	printf("ch5\n");
	printf("=================================================\n");
	int arr1[5] = { 0,1,2,3,4 };
	showAllData(arr1, 5);

	int n1 = 1;
	ShowData(&n1);

	char ItemName1[10] = "��";
	ShowItemData(ItemName1);


	//printf("��� ����\n");

	const int num1 = 10;	// num1 ����� �ȴ�. const�� ����ϸ� ���� �����ϴ� ���� �����Ѵ�. 

	const int PI = 3.14;	// ���� ������Ű�� ������ ����Ѵ�.

	int number1 = 2;
	int number2 = 3;
	const int* number1ptr = &number1;	// number1ptr �ּҸ� �����ϴ� ������ number1�� �ּҸ� �����Ѵ�.

	// *number1ptr += 2;	// 1. �ּҾȿ� ����ִ� ���� �����ߴ��� ������ ����. -> �ּҾ��� ���� �������� ����� �ǹ��̴�. == ��� ������

	number1ptr = &number2;	// �ּҸ� �����ϴ� �� �����ϴ�. 

	int* const number2ptr = &number2;	// �ּҸ� �������� ���ϰ� �����ϴ� �ڵ��̴�. 
	// number2ptr = &number2;
	*number2ptr += 3;

	const int* const number3ptr = &number2;	// ���� �ּ� ��� ���� ���ϴ� ����

	// const pointer
	// ���� ������ �� �ִ� ���� | �ּҸ� ������ �� �ִ� ���� | ���� �ּ� ��� ���� ���ϴ� ����
	// Ÿ��* const �̸�       | const Ÿ��* �̸�		  | const Ÿ��* const �̸�

	printf("����ü ����\n");

	StructExample();
}