/*
* �ۼ���	: 2025-03-20
* �ۼ���	: ��ȿ��
* ����	: ����ü�� ������
*/

/*
* ����ü�� �ּҸ� �����ϰ� ����ϴ� ���
* 
* ����ü�� ������ Type : Player
* 
* Ÿ���̸�*		�̸�
* Player*		playerptr;
*/

/*
* ����ü �������� ���� �����ϴ� ���
* 
* void SHowPlayerInfo(Player* playerptr)
* 
* 1. playerptr �ּ��̱� ������ ���� ������ �ؾ��Ѵ�. ������ �����ڸ� ����Ѵ�.(*playerptr)
* 2. ����ü�� �������� �����Ϳ� �����ϴ� ������ (���� ������ '.')	(*playerptr).playerName;
* 3. *playerptr.playerName �������� �켱������ �����ϱ� ������ *(playerptr.playerName)
* => playerptr �ּҿ��� playerName�� ������ �Ŀ� �� �ּ��� ���� ������ �ض��� �ǹ��̴�.
* 4. ȭ��ǥ ������ : ����ü�� �ּ� ���� -> *(playerptr.������ ������)
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