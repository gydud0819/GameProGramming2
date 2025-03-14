#pragma once
#include <stdio.h>
#include <conio.h>		// _getch()
#include <Windows.h>	// _kbhit(), GetAsyncKeystate(VK_LEFT)
#include <stdbool.h>

void GetInput(int* playerX, int* playerY);	// 함수를 이용하여 입력키를 이용해 플레이어 위치 이동시키기 ? 
