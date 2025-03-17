#pragma once

#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

// 플레이어의 좌표
// 왼쪽 화살표 키를 누르면 x좌표를 좌나 우로 한칸 이동 
void GetPlayerInput(int* PlayerX, int* PlayerY, int maxX);

void InputExample();
