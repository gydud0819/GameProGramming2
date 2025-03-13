/*
* �ۼ���	: 2025-03-13
* �ۼ���	: ��ȿ��
* ����	: �����Ϳ� ���� ����
*/

/*
* �����Ͷ� �����ΰ�?
* �����ʹ� �ּ��̴�.
* ������ ���� : � �����͸� �����ϴ���, �������� ũ��� ��� �Ǵ��� 
* ��ǻ���� ���� : �̸����� ������ ȣ���Ѵ�. �ּҸ� ����Ѵ�. 
*/

/*
* �ǽ�1, 2 ���� 
* ������ ����
* int number;	number ������ ���� ������ �� �ִ�. number�� �ּҸ� ���� �ִ�.
* �ּ� �����ڸ� ����ؼ� ������ ����ִ� �ּҸ� ����� �� �ִ�. &number; 
* ������ �� : �ּ� �����ڴ� ������ ����ǰ� �� ���Ŀ� ����ؾ� �Ѵ�. (������ �����ؾ߸� &�� �� �� �ִ�.)
* 
* ������ ������ ������ �� ����ϴ� ��ȣ
* ������ ������ : int* pointerNumber;
* 
* ������ ������ ����ǰ� �� ���Ŀ� ���Ǵ� ��ȣ
* ������ ������ : *pointerNumber;
*/

/*
* �����͸� ��𿡼� ����ϸ� ������?
* 
* ��ǻ�� �ȿ� �޸𸮸� �����ϴ� ������ �ִ�. �޸� �ּҷ� ������ �ϰ� �־���.
* �ּҸ� �˰� ������ ���� ��𼭳� ���� ������ �� �ִ�. 
* 
* ����? ������ �̸� ����� �ΰ� ����� �߾�� �Ѵ�. ���α׷� ���� �߿� �޸�̸� �Ҵ��ϰ� ����ϴ� ��� - ���� �Ҵ�
* ��𿡼�? �Լ����� ����� ���� �ܺο� ������ �ȵȴ�. Call by Reference (������?)
* 
*/

#include <stdio.h>

// Call by Value vs Call by Reference

void CallValue(int number)
{
	number = 100;
}

void CallReference(int* numberPtr)
{
	//	L- value		'='		R- Value
	//	int �ּ�					int
	//	16���� 0x019451ABC		10���� ���� 
	// �ΰ��� Ÿ���� �ٸ���. ���������� ���� �������� �Ѵ�.
	*numberPtr = 100;
}
void SwapPreview(int numA, int numB)
{
	int temp;	// �����͸� �ӽ÷� ������ ����
	temp = numA;	// A �ӽ� ����
	numA = numB;	// A�� B�� ������ ����
	numB = temp;	// B�� A�� ������ ����

	// �̸����� ����
	printf("Swap�� �̿��ϸ� �̷� ����� ���´�.\n");
	printf("����� numA�� �� : %d\n", numA);
	printf("����� numB�� �� : %d\n", numB);


}

// �ܺο��� ������ ���� �����ϰ� �ʹ�. (�ּ��� ���� �����Ѵ�.)
void Swap(int* numA, int* numB)
{
	int* temp;
	temp = *numA;
	numA = numB;
	numB = temp;
	// �׳� ������ �ƴ϶� whffk ������;;;;;;;;;;;;;
}

/*
* ����
* ��ǻ���� �ּҸ� ��� �ϴ� ����� ���� �����.
* 1. ������ ������ �����ϴ� ���				int* ������ ���� �̸�;
* 2. ������ ���� ������ �������� ���		int number = 10; &number;
* 3. �ּҷ� ���� ���� �������� ���			int* numptr; *numptr; 
*/

int main()
{
	printf("what is pointer?\n");
	printf("==============================\n");

	// �ǽ� 1. �����Ͱ� �����ΰ�?
	int number = 10;
	printf("���� ��� : %d\n", number);
	// �����͸� ����Ѵ�.
	printf("������ ��� : %p\n", &number);

	printf("==============================\n");

	// �ǽ� 2. ������ ���
	// *, &(�ּ� ������)
	// ������ ����
	int* pointerNumber;		// ������ ������ ����
	int num1 = 10;			// ������ ���� - �ּҰ� ���� ����ȴ�.
	pointerNumber = &num1;	// ������ ������ ������ �ּҰ��� ����

	printf("������ ��� : %p\n", pointerNumber);
	printf("���� ��� : %d\n", *pointerNumber);

	printf("==============================\n");
	// ��������1. ������ �ǽ�

	// float�� ������ �����ϰ� �� ������ �ּҸ� ����ϱ�.
	// �ּҿ� ����ִ� ���� ������ �����ڷ� ȣ���ϱ�.

	float floatNum = 0.1f;
	float* floatPointer = &floatNum;
	// �ּҰ� ���
	// 0.1���� ��������

	printf("float�� �ּҰ��� ����Ѵ� : %p\n", &floatNum);	// �ּ� ����ϱ�
	printf("�ּҷκ��� ���� ����ϱ� : %.2f\n", *floatPointer);	// �������� ȣ���ϱ�

	printf("==============================\n");

	
	char charNum = 'a';
	char* charPointer = &charNum;

	printf("char�� �ּҰ� ��� : %p\n", &charNum);
	printf("�ּҷκ��� �� ����ϱ� : %c\n", *charPointer);
	printf("�ּҷκ��� �ƽ�Ű �ڵ尪 ����ϱ� : %d\n", *charPointer);

	printf("==============================\n");

	int num2 = 5;
	int* num2ptr = &num2;

	long long longNum = 100;
	long long* longNumptr = &longNum;

	printf("long long ����\n");
	printf("�ּҷκ��� ���� ����Ѵ� : %d\n", &longNumptr);		// �ϴ� ���� ������.

	printf("==============================\n");

	printf("Call by value, Call by Reference ����\n\n");

	// Call by Value, Call by Reference
	int exampleNumber = 10;
	int* exampleNumptr = &exampleNumber;

	CallValue(exampleNumber);
	printf("CallValue ���� �� exampleNumber�� ��: %d\n", exampleNumber);
	CallReference(exampleNumptr);
	printf("CallValue ���� �� exampleNumber�� ��: %d\n", exampleNumber);
	
	// swap�� �����غ���.
	// num1, num2, temp
	// ������ ��ȭ�Ǿ� �ִ� ���¸� ����ϰ� �ʹ�.
	// �ѹ��� �� �� �ֵ��� ����� �����Ѵ�.

	int weaponLv = 1;
	int weaponBaseAP = 10;
	int weight = 5;

	int weaponPower = weaponLv * weight + weaponBaseAP;

	int* saveWeaponData = &weaponPower;

	// 2���� ������� weaponPower�� ������ �� �ִ�.
	printf("���� ���ݷ� : %d\n", weaponPower);
	printf("���� ���ݷ� : %d\n", *saveWeaponData);

	printf("==============================\n");

	int numA = 50;
	int numB = 60;

	SwapPreview(numA, numB);
	printf("���� numA, numB�� ��\n");
	printf("numA : %d, numB : %d\n\n", numA, numB);

	Swap(numA, numB);
	printf("Swap ���� ��\n");
	printf("���� numA, numB�� ��\n");
	printf("numA : %d, numB : %d\n", numA, numB);

}