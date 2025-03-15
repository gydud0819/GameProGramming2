#include "PointerOperator.h"

void PointerExample()
{
	int number1 = 0;
	int* number1ptr = &number1;

	double doublenumber1 = 1.0;
	double* doublenumber1ptr = &doublenumber1;

	printf("===============================\n");
	printf("포인터 연산 예제\n\n");

	printf("int 데이터의 크기 : %d byte\n", sizeof(number1));
	printf("double 데이터의 크기 : %d byte\n", sizeof(doublenumber1));

	printf("int 주소의 데이터의 크기 : %d byte\n", sizeof(number1ptr));
	printf("double 주소의 데이터의 크기 : %d byte\n", sizeof(doublenumber1ptr));

	// x86으로 주소의 크기 실행시 ; 4 byte
	// x64으로 주소의 크기 실행시 ; 8 byte
	// 주소는 크기가 일정하다. 크기가 고정되어 있다. (동적할당할때 추가로 배울예정)
	// 그럼 x32는? x86처럼 주소의 크기가 4 byte 이다. (궁금해서 인터넷에 찾아봄)
	

	// 주소 자체를 더하기 vs 주소를 참조해서 더하기 
	// 변수를 사용하는 데, 컴퓨터가 어딘가에 기억을 하고 있다. 주소라는 이름으로 기억하고 있다.
	// 변수의 이름으로 값을 가져올 수 있고, 주소로부터 값을 가져올 수도 있다.

	// 주소 형태로 가져오는 방식(참조 형식)		- 프로그램이 종료되거나, 직접 메모리를 해제하기 전까지 계속 남는다. 힙(heap) 영역
	// 변수의 이름으로 가져오는 방식(값 형식)		- {} 코드 영역이 끝나는 시점에 메모리가 해제된다.				   스택(stack) 영역

	// 모든 코드를 힙 영역에 항상 저장할 수는 없을까?
	// 게임 점수를 일정 값만큼 증가시키는 코드를 작성하고 싶음
	// 저장되어야 할 데이터 : 게임 점수
	// 한번만 사용하고 지우면 좋을 것 : 게임 점수를 증가하고 싶은 가중치
	
	// 모든 코드를 한번만 사용하고 저장을 하지 않는다면?
	// GameScore 포인터를 변경해서 저장하는 기능을 구현할 수 없게 된다.

	// Call by Value와 Call by reference 를 구분해서 사용해야하는 이유
	// Value = Stack(?)| reference = heap(?)	Value는 스택과 비슷한 결을 지니고 있고 reference는 힙과 비슷한 결을 지니고 있다.

	printf("number1ptr의 값을 출력 : %d\n", (*number1ptr) + 1);

	// 주소 더하기

	printf("===============================\n");

	printf("주소 출력하기\n\n");

	printf("int 주소 : %p\n", number1ptr);
	// 주소를 더하면 어떻게 될까?
	number1ptr += 1;
	printf("int 주소 : %p\n", number1ptr);

	printf("double 주소 : %p\n", doublenumber1ptr);
	doublenumber1ptr += 1;
	printf("double 주소 : %p\n", doublenumber1ptr);

	// 주소를 더하면 주소의 값이 가지고 있는 크기 만큼 증가한다.
	// 배열과 포인터의 관계에서 매우 중요하다. (배열은 다음주에 할 예정)

	
}
