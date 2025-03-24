#include "Mystring.h"

void arrayExample()
{
	printf("1. 문자 배열 예제\n\n");

	char name1 = 'a', name2 = 'p', name3 = 'p', name4 = 'l', name5 = 'e';

	printf("%c%c%c%c%c\n", name1, name2, name3, name4, name5);

	char word[5] = { 'a','p','p','l','e' };

	// 배열 : 주소+1

	for (int i = 0; i < 5; i++)
	{
		printf("%c", word[i]);
	}

	// 배열은 주소이다. 포인터를 이용해서 표현할 수는 없을까?

	printf("\n\n");
	printf("%s\n", "apple");	

	printf("%p\n", "apple");	// apple의 주소
	// "apple" << 문법적으로 해석하기
	// %s char 배열의 주소를 가져오겠다.
	// "apple" - 출력시 주소가 나온다. 즉, 주소로 호출하는 것

	// 함수를 이용해서 문자 배열을 출력
	// scanf_s : 문자열을 출력할 때 최대 수를 전달해줘야 한다. 

	// 문자 배열의 주소를 변수로 저장하고 싶을 때
	char* inputArray[6];
	char inputWord = inputArray;	// a, p, p, l, e, \0 으로 구성되어 있다.
	printf("단어를 입력해주세요.\n");
	scanf_s("%s", inputArray, 6);	// 주소를 전달받아서 저장한다.
	printf("%s\n", inputArray);

	/*
	* 문자 배열 예제 정리
	* apple 예제
	* "apple" << 문법적으로 해석하기
	* %s char 배열의 주소를 가져오겠다.
	* "apple" - 출력시 주소가 나온다. 즉, 주소로 호출하는 것
	* 
	* 함수를 이용해서 문자 배열을 출력할 때
	* scanf_s 사용: 문자열을 출력할 때 최대 수를 전달해줘야 한다. 
	* 
	*/

	// 주인공의 이름을 설정하기

	// 플레이어 구조체 - char* 주소를 전달받고 저장

	char input[10];

	printf("주인공의 이름을 입력해주세요.\n");
	scanf_s("%s", input, 10);
	char* playerName = input;	// 문자열 복사 

	printf("%s", playerName);
}
