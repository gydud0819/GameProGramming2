/*
* 작성일	: 2025-03-17
* 작성자 : 박효영
* 주제	: 메모리의 사용 (동적 할당)
*/

/*
* 포인터 : 주소를 다루는 방법
* 포인터 변수 선언 : 데이터 타입* 변수명 = int* numptr;
* 포인터 주소로부터 값을 변경 : *numptr;
* 변수 : int num; &num; 변수에 할당된 주소를 가져올 수 있다.
*/

/*
* 함수 사용 - 매개 인자 위치에 값이 오느냐 주소가 오느냐
*
* void Function(int A, int B);
* 플레이어의 위치(x,y좌표) 값을 설정해주는 함수 만들기
* 개인 프로젝트에 Main에 구현한 코드를 함수로 바꿔보기 (포인터 사용해서)
*/

/*
* 오늘 배울거
* 포인터 변수 형태를 사용해본다.
*
* 동적 할당 예시
* 메모리를 직접 할당 해준다. 동적할당으로 할당된 메모리는 스스로 해제할 수 없다. 사용자가 직접 해제를 해줘야 한다.
* 포인터 변수  = malloc(sizeof(데이터 타입)); 으로 쓰며 memory allocate (malloc)를 줄여 malloc이라 한다.
* num1ptr = malloc(sizeof(int));	// 4byte 크기만큼 메모리 공간을 배정해라(할당해라) 라는 의미이다.
* 지역 변수 - 함수가 종료될 때 같이 해제된다.
* 함수 안에서 동적할당된 메모리는 해제되지 않는다.
* 해당 메모리의 사용이 끝이나면 수동으로 해제를 해줘야 한다.
* free(포인터 변수);
* Inventory.h 헤더 만들기
*/

/*
* 버그 발생
* Throw : 읽기 예외가 발생합니다. 변수를 넣어야 할 자리에 주소를 넣거나, 주소를 넣어야 할 자리에 변수를 넣으면 발생하는 에러이다.
* 함수 선언 후 사용할 때 꼭 주의하기
* ptr - 주소
*/


#include <stdio.h>
#include "Input.h"
#include "Inventory.h"

void SetMemoryAndValue(int amount)	// 주소를 하나 받아와서 주소의 값을 amount 값으로 
{
	int* num1ptr = NULL;			// 정수(4byte 정수 값을 저장하는 형태)
	// numptr 메모리 변수(지역 변수), 주소의 값을 변경한다. 
	num1ptr = malloc(sizeof(int));	// 4byte 크기만큼 메모리 공간을 배정해라

	*num1ptr = amount;

	printf("할당한 메모리 주소의 값 : %p\n", num1ptr);
	printf("할당한 메모리의 값을 호출 : %d\n", *num1ptr);

	free(num1ptr);	// free() 함수를 반드시 사용해야 메모리가 해제된다. 해제해주지 않으면 메모리가 남아 나중에 터진다.

}

int main()
{
	printf("ch3");
	//InputExample();
	printf("포인터 변수 사용\n\n");

	int number = 1;
	int* numberptr = &number;

	// 컴퓨터의 메모리 공간에 값을 저장할 수 있는 주소를 할당했다.
	// 조건문, 특정 상황에서만 코드를 실행한다. (동적할당)

	// 인벤토리 최대 크기 4칸(정수를 4개 저장)
	// 업그레이드를 해서 최대 크기 증가(저장할 수 있는 정수의 갯수가 늘어난다.)

	//*num1ptr = 10;

	SetMemoryAndValue(10);

	int* inventoryptr = malloc(sizeof(int));
	*inventoryptr = 0;


	// scanf_s
	// ctrl+k ,s

	while (true)
	{
		printf("1. 인벤토리의 수가 증가됩니다.\n");
		printf("2. 현재 인벤토리의 크기를 열람합니다.\n");

		int intputnumber = 1;
		printf("키를 입력해주세요.\n");
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