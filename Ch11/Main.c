/*
* 작성일	: 2025-03-31
* 작성자	: 박효영
* 주제	: 파일 입출력 (File Stream & File Input Output)
*/

/*
* 파일을 생성하기 위한 단계
* 1. 파일이 저장될 경로 지정하기
* 2. 어떤 파일을 만들건지 지정해준다. (파일이름, 확장자 등)
* 3. 파일을 열어서 데이터를 저장한다.
*/

/*
* 특정 환경체제에서 (Window64bit) 파일을 생성한다.
* 컴퓨터에 장치를 접근해야 한다. 
*/

/*
* 위의 수동 과정을 코드로 해보기
*/
#define _CRT_SECURE_NO_WARNINGS // scanf_s 버전을 사용하지 않고 scanf를 사용할 수 있도록 경고를 무시하는 코드
#include <stdio.h>
#include "FileHandler.h"
// printf, scanf (콘솔 입출력)
// 파일 입출력, 파일 구조체

/*
* 파일을 저장하는 함수
* fopen - 불러올 경로를 지정해준다. 어떻게 가져올건지 선택을한다. (읽을 때 : read, 쓸 때 : write, 
*/

/*
* 유튜브 스트리밍
* Streaming: 어떤 행위를 연속적으로 실행하는 것 
* 흰색 바 = 버퍼 : 임시 공간을 부여해서 그 임시 데이터를 보여준다. 
* 
* 비트 스트림, 파일 스트림이 무엇인가?
* 비트 : 0,1로 구성된 단위 / 바이트: 파일의 기본 단위
* 스트림을 연결해야 파일을 다룰 수 있다. 
* fopen : 파일 스트림을 연결해주는 함수이다. "w", "r", "a"
*/

typedef struct _PEOPLE
{
	char name[4];
	int age;
}people;

// 캐릭터의 이름과 점수를 저장하는 구조체 만들기
typedef struct _CHARACTER
{
	char nickName[20];
	int score;
}Character, Score;

/*
* C:\Users\Administrator\Desktop\GameProGramming2\Ch11\example\.txt
* fopen("") 이 코드가 작성되고 있는 현재 주소를 반환한다. 
* 파일 이름 경로를 제어해보기 
* 폴더를 생성해서 데이터를 저장하고 싶다면, 폴더 이름\\파일이름 확장자
*/

/*
* File 구조체를 사용하면 코드르 이용해서 데이터를 외부에 저장할 수 있다.
* FILE 형태의 주소를 연결해야 파일을 저장 또는 읽어올 수 있다.
* 폴더를  생성해서 데이터를 저장하고 싶다면, 폴더 이름\\파일이름.확장자
* 
* fopen(); fclose();
* 
* fputs(); fprintf(); 파일 모드가 "w" 데이터를 저장할 수 있다.
* fgets(); fscanf(); 파일 모드가 "r" 데이터를 저장할 수 있다.
* 
* "w" 모드를 선택하면 기존 데이터가 전부  삭제된다.
* "r" 모드를 선택하면 기존 데이터에 이어서 추가된다. (기존 랭킹에 새로운 점수가 등록될 수 있다.)
*/

int main()
{
	printf("파일 생성 및 입출력 작성하기\n");

	FILE* fptr = fopen("example\\example2.txt", "w");

	// 1. 데이터를 문자열로 직접 연결한 것 
	fputs("BBB 100\n", fptr);
	// 2. 변수를 불러와서 저장해야 한다. 

	// 파일을 구조체로 불러온 것
	people player1 = { "CCC", 23 };
	fprintf(fptr, "%s %d\n", player1.name, player1.age);

	// 3. 점수 구조체를 만들어서 메모장에 저장하기
	Score myScore = {"Picher", 1000};
	fprintf(fptr, "%s %d\n", myScore.nickName, myScore.score);


	//Character player2 = { "Catcher", 750 };
	//fprintf(fptr, "%s %d\n", player2.nickName, player2.score);

	//Character player3 = { "Infilder", 500 };
	//fprintf(fptr, "%s %d\n", player3.nickName, player3.score);


	fclose(fptr);

	// 함수로 표현해보기 
	
	printf("경로안에 있는 파일을 읽어오기\n");

	FILE* fptr2 = fopen("example\\example2.txt", "r");


	char name[4];
	int age;
	int maxNumber = 3;

	for (int i = 0; i < 3; i++)
	{
		fscanf(fptr2, "%s %d", name, &age);
		printf("이름 : %s, 점수 : %d\n", name, age);
	}

	fclose(fptr2);

	printf("함수로 데이터 저장하기\n");

	char myName[4] = "FFF";
	int myScore2 = 5000;


	SaveScore(myName, myScore2);
}