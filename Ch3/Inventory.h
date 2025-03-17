#pragma once

#include <stdio.h>

// 시작할 때 인벤토리 크키 4칸이다.
// 특정 이벤트를 통해 최대 크기를 n칸으로 증가시키고 싶을 때
// _getch, scanf_s() 등 함수를 사용하기
// 1. 인벤토리 최대 크기 증가 2. 현재 인벤토리의 수

// 전역 포인터 변수를 사용하면 좋다.

void ShowInventoryCount(int* invertory);

void IncreaseInventoryCount(int* inventory, int increaseCount);
