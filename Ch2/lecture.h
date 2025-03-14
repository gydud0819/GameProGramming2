#pragma once
#include <stdio.h>

void ShowLecture();

void Swap(int* a, int* b);	// 함수의 인자에 어떤 경우에 포인터를 사용해야 할까? 

void IncreaseScore(int* score, int points);		// score 주소, points 값

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight);

void IncreaseItem(int* Item, int Plus);	// 아이템 개수 늘릴려면 // Item 주소, Plus 값

void MovePlayer(int* x, int* y);