/*
* 작성일	: 2025-03-18
* 작성자	: 박효영
* 주제	: 배열과 포인터
*/

/*
* 1. 배열(array)	: 왜, 언제 사용하는가?
* 예시	: 성적표(국어, 영어, 수학) 
* 사용 목적		: 하나의 변수로 같은 타입의 변수를 표현할 수 있다.
*/

/*
* 문자(character) : '단어', 'a' 'b' 'c'
*/
#include <stdio.h>
//#include <string>
#include "Item.h"

int main()
{
	printf("ch4\n");

	printf("============================================================\n");

	printf("배열 예시 : 성적표 만들기\n");

	int ScoreA = 100;	// 국어
	int ScoreB = 90;	// 수학
	int ScoreC = 94;	// 영어

	// 변수 : 데이터 타입으로 선언한 저장소 - 메모리에 저장되는 크기, 010101 해석하는 방법, 시작하는 메모리 주소
	// 같은 타입의 변수를 하나의 이름으로 표현하는 방법 : 배열

	int scores[3] = { 100,90,94 };	// 배열을 선언 : int 데이터 타입을 3개 저장하는 scores이름의 변수	// 대괄호를 사용해야한다.

	scores[0];	// (scores 주소 + 0) = 자기자신
	scores[1];	// (scores 주소 + 1) = 두번째 원소
	scores[2];

	printf("성적을 순서대로 출력하세요\n");
	for (int i = 0; i < 3; i++)
	{
		printf("점수  : %d\n", scores[i]);
	}

	printf("============================================================\n");

	//printf("국어 : %d, 수학 : %d, 영어 : %d\n", ScoreA, ScoreB, ScoreC);

	// 인벤토리에 들어갈 아이템 정의
	// 아이템 이름(문자열), 아이템 갯수, Index 등
	
	char itemName[10] = "AAA";	// char A x 3 - 문자들의 배열(문자열)
	int itemCount = 1;
	int itemIndex = 1;

	printf("예시\n\n");

	printf("아이템 1번의 정보\n");
	printf("아이템 번호 : %d, 아이템 이름 : %s, 아이템 수량 : %d개\n\n", itemIndex, itemName, itemCount);
	
	// 아이템의 데이터를 설정한다. (게임 고유의 데이터일수도 있고, 세이브 데이터 일수도 있다.)
	int itemCounts[5] = { 1,2,3,4,5};
	int itemIndexs[5] = { 1,2,3,4,5};
	char* itemNames[5] = { "AAA", "BBB", "CCC", "DDD", "EEE" };		// 배열을 포인터처럼 사용

	printf("모든 아이템을 열람한다.\n\n");

	for (int i = 0; i < 5; i++)
	{
		printf("아이템 번호 : %d, 아이템 이름 : %s, 아이템 수량 : %d개\n", itemIndexs[i], itemNames[i], itemCounts[i]);

	}

	printf("============================================================\n");

	ShowItemInfo();	// 아이템 정보를 나타내는 함수

	printf("문자열에 대한 이해 \n\n");

	// 사과(apple) 문자로 출력해보기
	char char1 = 'a';
	char char2 = 'p';
	char char3 = 'p';
	char char4 = 'l';
	char char5 = 'e';

	// appleis 띄어쓰기
	// apple is red
	// 문자열에서 마지막에 공백문자를 사용해서 이 문장이 끝났음을 알린다.

	printf("%c%c%c%c%c\n",char1, char2, char3, char4, char5);

	char chars[5] = { 'a','p','p','l','e' };	// "apple" <한번에 출력할 수도 있는데 이건 나중에 배울 예정

	for (int i = 0; i < 5; i++)
	{
		printf("%c", chars[i]);
	}

	char scoreName[10] = "국어";		// 포인터의 의미가 숨어있다. 16진수의 주소로 저장하고 있다.

	printf("%s\n", scoreName);	// string

	char scoreName2[10] = "English";	// 배열을 선언했을 때 저장할 공간이 남으면 어떻게 될까? int, double -> 0

	printf("%c\n", scoreName2[0]);
	printf("%c\n", scoreName2[1]);
	printf("%c\n", scoreName2[2]);
	printf("%c\n", scoreName2[3]);
	printf("%c\n", scoreName2[4]);
	printf("%c\n", scoreName2[5]);
	printf("%c\n", scoreName2[6]);
	printf("%d\n", scoreName2[7]);		// 값을 할당하고도 공간이 남을 경우 0이나 쓰레기값으로 공간을 채운다.
	printf("%d\n", scoreName2[8]);		// 저장할 공간이 남으면 그 공간은 0으로 메꾸는건가? 아님 아무것도 아닌 NULL로 메꾸는건가? 이것도 아니면 쓰레기값으로 메꾸는건가?

	// "국어" -> 문자열		메모리 주소| 국 | 어 |
	// 메모리의 첫번째 주소를 알고, 메모리의 크기를 알면 글자를 한번에 출력할 수 있다.
	// "국"이라는 문자 주소로 저장 되어 있다.
	// 배열도 포인터 주소이다. 

	printf("============================================================\n");

	char* scoreptr = "Math";

	printf("이름 : %s\n", scoreptr);
	printf("%c", *(scoreptr + 0));	// Math "M" 시작 주소 - scoreptr(1byte)
	printf("%c", *(scoreptr + 1));	// Math "a" 시작 주소 - scoreptr(1byte)
	printf("%c", *(scoreptr + 2));	// Math "t" 시작 주소 - scoreptr(1byte)
	printf("%c", *(scoreptr + 3));	// Math "h" 시작 주소 - scoreptr(1byte)

	// 왜 배열은 주소로 데이터를 저장하고 있을까?
	// 최대한의 효율로 메모리를 사용하기 위해서이다. 
	// 주소만 안다면

	int number[10];	// 4x10 미리 할당 

	// 데이터의 이름을 표현하는 방법 
	// 단어의 배열을 표현하는 방법
	// 이름은 단어의 배열


	char ItemName[10] = "이름";	// 10칸을 미리 확보해서 가져온다.		
	char* itemNameptr = "이름2";	// 주소로 가져온다.		

	printf("%s, %s\n", ItemName, itemNameptr);

	// 포인터와 인덱스를 이용해 값에 접근할 수 있다. (둘다 주소를 통해 값을 간접적으로 접근할 수 있다.)
	ItemExample();	// 포인터와 인덱스를 이용한 예시 함수
}