#pragma once
#include <stdio.h>

void ShowLecture();

void Swap(int* a, int* b);	// �Լ��� ���ڿ� � ��쿡 �����͸� ����ؾ� �ұ�? 

void IncreaseScore(int* score, int points);		// score �ּ�, points ��

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight);

void IncreaseItem(int* Item, int Plus);	// ������ ���� �ø����� // Item �ּ�, Plus ��

void MovePlayer(int* x, int* y);