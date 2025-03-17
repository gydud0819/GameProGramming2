#pragma once
#include "Input.h"

/*
* while(1)
* {
*	if(_kbhit)
*	{
*		GetAsy...
*/

void GetPlayerInput(int* PlayerX, int* PlayerY, int maxX)
{
	if (_kbhit())	// Ű�� �Է����� �� ����ȴ�.
	{
		// x��ǥ
		if (GetAsyncKeyState(VK_LEFT))
		{
			// x��ǥ�� -1 �Ѵ�
			*PlayerX -= 1;

			if (*PlayerX <= 0)
			{
				*PlayerX = 0;
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			*PlayerX += 1;

			if (*PlayerX >= maxX)

				*PlayerX = maxX;
		}
		if (GetAsyncKeyState(VK_UP))
		{
			// x��ǥ�� -1 �Ѵ�
			*PlayerY -= 1;

			if (*PlayerY <= 0)
			{
				*PlayerY = 0;
			}
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			*PlayerY += 1;
		}
	}
}

void InputExample()
{
	int PlayerX = 0;
	int PlayerY = 0;
	int maxX = 10;

	while (true)
	{
		GetPlayerInput(&PlayerX, &PlayerY, maxX);

		printf("x y ��ǥ : %d, %d\n", PlayerX, PlayerY);

		Sleep(100);

	}
}
