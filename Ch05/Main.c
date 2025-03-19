/*
* 작성일	: 2025-03-19
* 작성자	: 박효영
* 주제	: 구조체에 대한 이해
*/
/*
* 지난 시간 복습 : 배열과 포인터
* | 비고								|	   배열		|  포인터	|
* |	이름이 존재하는가?				|     O			|	O		|
* | 무엇을 저장하는가?				|	시작 주소	|	주소		|
* | 주소값이 변경가능한가?			|	  X			|	O		|
*/

/*
* 상수 포인터 : 주소안의 값을 변경하지 말라는 것?
* const 
*/

#include <stdio.h>
#include "struct.h"

// array주소의 값을 변경하지 말아주세요
void showAllData(const int* array, int length)	// 배열을 가져와서 데이터를 보고 싶다. -> 배열을 가져와서 값을 바꾸는 함수인가?
{
	for (int i = 0; i < length; i++)
	{
		// array[i] += 1;
		printf("%d ", array[i]);
	}
}

// 잘못된 예제
void ShowData(const int* num1ptr)	// num1ptr에 들어있는 값을 변경하지 말아주세요.
{
	int* rptr = num1ptr;	// rptr, num1ptr주소의 값을 저장한다.
	*rptr += 2;				// num1ptr에 들어있는 값이 변경된다.

	printf("%d \n", *num1ptr);
	printf("=================================================\n");
}

// Item의 이름을 출력하는 함수를 구현하기 (단, 이름의 값은 변경되면 안된다.) 그럼에도 불구하고 바꾸고 싶다면? 함수를 새로 만들어서 바꾼다.
void ShowItemData(char* ItemName)
{
	//*ItemName = "소금빵";		// ItemName에 접근하여 값을 변경하지 못하게 한다. 
	printf("아이템 이름 : %s\n", ItemName);
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

	char ItemName1[10] = "빵";
	ShowItemData(ItemName1);


	//printf("상수 예제\n");

	const int num1 = 10;	// num1 상수가 된다. const을 사용하면 값을 변경하는 것을 제한한다. 

	const int PI = 3.14;	// 값을 고정시키고 싶을때 사용한다.

	int number1 = 2;
	int number2 = 3;
	const int* number1ptr = &number1;	// number1ptr 주소를 저장하는 변수에 number1의 주소를 저장한다.

	// *number1ptr += 2;	// 1. 주소안에 들어있는 값을 변경했더니 에러가 났다. -> 주소안의 값을 변경하지 말라는 의미이다. == 상수 포인터

	number1ptr = &number2;	// 주소를 변경하는 건 가능하다. 

	int* const number2ptr = &number2;	// 주소를 변경하지 못하게 제한하는 코드이다. 
	// number2ptr = &number2;
	*number2ptr += 3;

	const int* const number3ptr = &number2;	// 값과 주소 모두 변경 못하는 형태

	// const pointer
	// 값만 변경할 수 있는 형태 | 주소만 변경할 수 있는 형태 | 값과 주소 모두 변경 못하는 형태
	// 타입* const 이름       | const 타입* 이름		  | const 타입* const 이름

	printf("구조체 예제\n");

	StructExample();
}