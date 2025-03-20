/*
* 작성일	: 2025-03-20
* 작성자	: 박효영
* 주제	: 구조체와 포인터
*/

/*
* 구조체의 주소를 선언하고 사용하는 방법
* 
* 구조체를 선언한 Type : Player
* 
* 타입이름*		이름
* Player*		playerptr;
*/

/*
* 구조체 포인터의 값을 접근하는 방법
* 
* void SHowPlayerInfo(Player* playerptr)
* 
* 1. playerptr 주소이기 때문에 값에 접근을 해야한다. 역참조 연산자를 사용한다.(*playerptr)
* 2. 구조체의 변수에서 데이터에 접근하는 연산자 (접근 연산자 '.')	(*playerptr).playerName;
* 3. *playerptr.playerName 연산자의 우선순위가 존재하기 때문에 *(playerptr.playerName)
* => playerptr 주소에서 playerName을 접근한 후에 그 주소의 값을 역참조 해라라는 의미이다.
* 4. 화살표 연산자 : 구조체의 주소 변수 -> *(playerptr.접근할 데이터)
	{
		(*playerptr).playeName;
		playerptr->playerName;
	}
*/

#include <stdio.h>
#include "StructPointer.h"
#include "GameUI.h"

int main()
{
	//Ch6Example();

	GameStart();
}