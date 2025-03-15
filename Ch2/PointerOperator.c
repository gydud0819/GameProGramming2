#include "PointerOperator.h"

void PointerExample()
{
	int number1 = 0;
	int* number1ptr = &number1;

	double doublenumber1 = 1.0;
	double* doublenumber1ptr = &doublenumber1;

	printf("===============================\n");
	printf("������ ���� ����\n\n");

	printf("int �������� ũ�� : %d byte\n", sizeof(number1));
	printf("double �������� ũ�� : %d byte\n", sizeof(doublenumber1));

	printf("int �ּ��� �������� ũ�� : %d byte\n", sizeof(number1ptr));
	printf("double �ּ��� �������� ũ�� : %d byte\n", sizeof(doublenumber1ptr));

	// x86���� �ּ��� ũ�� ����� ; 4 byte
	// x64���� �ּ��� ũ�� ����� ; 8 byte
	// �ּҴ� ũ�Ⱑ �����ϴ�. ũ�Ⱑ �����Ǿ� �ִ�. (�����Ҵ��Ҷ� �߰��� ��￹��)
	// �׷� x32��? x86ó�� �ּ��� ũ�Ⱑ 4 byte �̴�. (�ñ��ؼ� ���ͳݿ� ã�ƺ�)
	

	// �ּ� ��ü�� ���ϱ� vs �ּҸ� �����ؼ� ���ϱ� 
	// ������ ����ϴ� ��, ��ǻ�Ͱ� ��򰡿� ����� �ϰ� �ִ�. �ּҶ�� �̸����� ����ϰ� �ִ�.
	// ������ �̸����� ���� ������ �� �ְ�, �ּҷκ��� ���� ������ ���� �ִ�.

	// �ּ� ���·� �������� ���(���� ����)		- ���α׷��� ����ǰų�, ���� �޸𸮸� �����ϱ� ������ ��� ���´�. ��(heap) ����
	// ������ �̸����� �������� ���(�� ����)		- {} �ڵ� ������ ������ ������ �޸𸮰� �����ȴ�.				   ����(stack) ����

	// ��� �ڵ带 �� ������ �׻� ������ ���� ������?
	// ���� ������ ���� ����ŭ ������Ű�� �ڵ带 �ۼ��ϰ� ����
	// ����Ǿ�� �� ������ : ���� ����
	// �ѹ��� ����ϰ� ����� ���� �� : ���� ������ �����ϰ� ���� ����ġ
	
	// ��� �ڵ带 �ѹ��� ����ϰ� ������ ���� �ʴ´ٸ�?
	// GameScore �����͸� �����ؼ� �����ϴ� ����� ������ �� ���� �ȴ�.

	// Call by Value�� Call by reference �� �����ؼ� ����ؾ��ϴ� ����
	// Value = Stack(?)| reference = heap(?)	Value�� ���ð� ����� ���� ���ϰ� �ְ� reference�� ���� ����� ���� ���ϰ� �ִ�.

	printf("number1ptr�� ���� ��� : %d\n", (*number1ptr) + 1);

	// �ּ� ���ϱ�

	printf("===============================\n");

	printf("�ּ� ����ϱ�\n\n");

	printf("int �ּ� : %p\n", number1ptr);
	// �ּҸ� ���ϸ� ��� �ɱ�?
	number1ptr += 1;
	printf("int �ּ� : %p\n", number1ptr);

	printf("double �ּ� : %p\n", doublenumber1ptr);
	doublenumber1ptr += 1;
	printf("double �ּ� : %p\n", doublenumber1ptr);

	// �ּҸ� ���ϸ� �ּ��� ���� ������ �ִ� ũ�� ��ŭ �����Ѵ�.
	// �迭�� �������� ���迡�� �ſ� �߿��ϴ�. (�迭�� �����ֿ� �� ����)

	
}
