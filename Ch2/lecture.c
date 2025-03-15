#include "lecture.h"

// 전역 변수

int GameScore = 0;	// 점수 늘리는 변수
int GameItem = 0;	// 아이템 개수의 변수

int PlayerX = 0;	// 플레이어 위치 변수
int PlayerY = 0;	

void ShowLecture()
{
	printf("강의 예제1\n\n");

	// 변수를 선언하고 주소를 출력해보기

	int num1 = 10;

	int* intptr = &num1;				// 왼 : 주소		=		오 : 값

	printf("값을 출력 : %d\n", num1);
	printf("주소 출력 : %p\n\n", intptr);

	printf("===============================\n");

	printf("강의 실습 1\n\n");

	// int* 2개가 필요하다. (int형 주소가 2개 필요하다.)
	int numA = 5;
	int numB = 6;
	printf("numA의 값 : %d, numB의 값 : %d\n", numA, numB);

	// Swap 함수 사용 후 변경된 값
	Swap(&numA, &numB);
	printf("numA의 값 : %d, numB의 값 : %d\n\n", numA, numB);

	printf("===============================\n");

	printf("응용 예제 1\n\n");	// 점수를 획득하는 시스템을 구현 (특정 행동을 할 때, 시간에 따라 추가)

	IncreaseScore(&GameScore, 10);
	printf("현재 점수 : %d\n", GameScore);

	printf("===============================\n");

	printf("강의 실습 2\n\n");

	// 변수 3개 만들기

	float weight = 1.5f;
	int weaponLv = 1;	// 증가레벨
	int baseAP = 10;

	// 무기 공격력을 증가시키는 함수
	// 일반 강화랑 고급 강화를 같은 함수를 사용해서 구현할 순 없을까?
	printf("가중치 레벨 : %f, 레벨 : %d, 기본 공격력 : %d\n", weight, weaponLv, baseAP);

	UpgradeWeapon(&weaponLv, baseAP, &weight);

	printf("가중치 레벨 : %f, 레벨 : %d, 기본 공격력 : %d\n", weight, weaponLv, baseAP);

	printf("===============================\n");

	// 정리
	// 함수를 이용해서 값을 변경한다.
	// 주소를 이용해서도 값을 변경할 수 있다. 
	// 언제 주소를 사용해야 할까?
	// 1. 외부의 값을 변경해야 할 때, 2. 가져와야할 데이터 타입이 너무 클 때 주소만으로 가져올 수 있다. 

	// 아이템의 갯수를 증가시키는 함수 만들기
	printf("기본 아이템의 개수 : %d\n", GameItem);
	IncreaseItem(&GameItem, 2);
	printf("획득한 아이템의 개수 : %d 개\n", GameItem);

	printf("===============================\n");

	// 플레이어의 좌표를 이동시키는 함수를 만들기
	printf("플레이어의 X 위치 : %d, 플레이어의 Y 위치 : %d\n", PlayerX, PlayerY);
	MovePlayer(&PlayerX, &PlayerY);
	printf("이동된 플레이어의 X 위치 : %d, 플레이어의 Y 위치 : %d\n", PlayerX, PlayerY);
}

void Swap(int* a, int* b)
{
	int temp = *a;		// a는 주소인데 주소로부터 값을 가져오는 연산자(&) temp에 저장 숫자 5가 저장된다.
	*a = *b;			// *포인터 변수 = 값 : a의 주소에 값을 저장해라. 
	*b = temp;			// *b : b의 주소에 저장되어 있는 값을 불러와라.
	// 1. (*b -> 6) 2. *a = 6 3. numA = 6
}

void IncreaseScore(int* score, int points)
{
	// GameScore 주소를 받아옴
	// *주소 변수 = 값;		// 외부에 있는 GameScore값이 변경된다.

	*score += points;
}

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight)	
{
	// 레벨을 1 증가 시킨다.
	// 가중치를 특정 레벨에서 변경한다.

	*weaponLv += 5;

	if (*weaponLv % 5 == 0)
	{
		*weight = *weight * 1.5f;

	}

	printf("현재 무기 공격력 : %f\n", (*weaponLv) * (*weight) + baseAP);
}

void IncreaseItem(int* Item, int Plus)
{
	*Item += Plus;
}

void MovePlayer(int* x, int* y)
{
	*x = 5;
	*y = 10;
}



