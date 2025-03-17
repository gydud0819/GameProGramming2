/*
* �ۼ���	: 2025-03-17
* �ۼ��� : ��ȿ��
* ����	: �޸��� ��� (���� �Ҵ�)
*/

/*
* ������ : �ּҸ� �ٷ�� ���
* ������ ���� ���� : ������ Ÿ��* ������ = int* numptr;
* ������ �ּҷκ��� ���� ���� : *numptr;
* ���� : int num; &num; ������ �Ҵ�� �ּҸ� ������ �� �ִ�.
*/

/*
* �Լ� ��� - �Ű� ���� ��ġ�� ���� ������ �ּҰ� ������
*
* void Function(int A, int B);
* �÷��̾��� ��ġ(x,y��ǥ) ���� �������ִ� �Լ� �����
* ���� ������Ʈ�� Main�� ������ �ڵ带 �Լ��� �ٲ㺸�� (������ ����ؼ�)
*/

/*
* ���� ����
* ������ ���� ���¸� ����غ���.
*
* ���� �Ҵ� ����
* �޸𸮸� ���� �Ҵ� ���ش�. �����Ҵ����� �Ҵ�� �޸𸮴� ������ ������ �� ����. ����ڰ� ���� ������ ����� �Ѵ�.
* ������ ����  = malloc(sizeof(������ Ÿ��)); ���� ���� memory allocate (malloc)�� �ٿ� malloc�̶� �Ѵ�.
* num1ptr = malloc(sizeof(int));	// 4byte ũ�⸸ŭ �޸� ������ �����ض�(�Ҵ��ض�) ��� �ǹ��̴�.
* ���� ���� - �Լ��� ����� �� ���� �����ȴ�.
* �Լ� �ȿ��� �����Ҵ�� �޸𸮴� �������� �ʴ´�.
* �ش� �޸��� ����� ���̳��� �������� ������ ����� �Ѵ�.
* free(������ ����);
* Inventory.h ��� �����
*/

/*
* ���� �߻�
* Throw : �б� ���ܰ� �߻��մϴ�. ������ �־�� �� �ڸ��� �ּҸ� �ְų�, �ּҸ� �־�� �� �ڸ��� ������ ������ �߻��ϴ� �����̴�.
* �Լ� ���� �� ����� �� �� �����ϱ�
* ptr - �ּ�
*/


#include <stdio.h>
#include "Input.h"
#include "Inventory.h"

void SetMemoryAndValue(int amount)	// �ּҸ� �ϳ� �޾ƿͼ� �ּ��� ���� amount ������ 
{
	int* num1ptr = NULL;			// ����(4byte ���� ���� �����ϴ� ����)
	// numptr �޸� ����(���� ����), �ּ��� ���� �����Ѵ�. 
	num1ptr = malloc(sizeof(int));	// 4byte ũ�⸸ŭ �޸� ������ �����ض�

	*num1ptr = amount;

	printf("�Ҵ��� �޸� �ּ��� �� : %p\n", num1ptr);
	printf("�Ҵ��� �޸��� ���� ȣ�� : %d\n", *num1ptr);

	free(num1ptr);	// free() �Լ��� �ݵ�� ����ؾ� �޸𸮰� �����ȴ�. ���������� ������ �޸𸮰� ���� ���߿� ������.

}

int main()
{
	printf("ch3");
	//InputExample();
	printf("������ ���� ���\n\n");

	int number = 1;
	int* numberptr = &number;

	// ��ǻ���� �޸� ������ ���� ������ �� �ִ� �ּҸ� �Ҵ��ߴ�.
	// ���ǹ�, Ư�� ��Ȳ������ �ڵ带 �����Ѵ�. (�����Ҵ�)

	// �κ��丮 �ִ� ũ�� 4ĭ(������ 4�� ����)
	// ���׷��̵带 �ؼ� �ִ� ũ�� ����(������ �� �ִ� ������ ������ �þ��.)

	//*num1ptr = 10;

	SetMemoryAndValue(10);

	int* inventoryptr = malloc(sizeof(int));
	*inventoryptr = 0;


	// scanf_s
	// ctrl+k ,s

	while (true)
	{
		printf("1. �κ��丮�� ���� �����˴ϴ�.\n");
		printf("2. ���� �κ��丮�� ũ�⸦ �����մϴ�.\n");

		int intputnumber = 1;
		printf("Ű�� �Է����ּ���.\n");
		scanf_s("%d", &intputnumber);
		while (getchar() != '\n');

		if (intputnumber == 1)
		{
			IncreaseInventoryCount(inventoryptr, 4);
		}
		else
		{
			ShowInventoryCount(inventoryptr);

		}
	}

	free(inventoryptr);
}