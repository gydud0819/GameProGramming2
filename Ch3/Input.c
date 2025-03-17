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
	if (_kbhit())	// Å°¸¦ ÀÔ·ÂÇßÀ» ¶§ ½ÇÇàµÈ´Ù.
	{
		// xÁÂÇ¥
		if (GetAsyncKeyState(VK_LEFT))
		{
			// xÁÂÇ¥¸¦ -1 ÇÑ´Ù
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
			// xÁÂÇ¥¸¦ -1 ÇÑ´Ù
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

		printf("x y ÁÂÇ¥ : %d, %d\n", PlayerX, PlayerY);

		Sleep(100);

	}
}
