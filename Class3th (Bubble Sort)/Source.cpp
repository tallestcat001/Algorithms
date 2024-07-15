﻿#include <iostream>

#define SIZE 5

using namespace std;

int main()
{

#pragma region 거품 정렬

	// 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘.

	int list[SIZE] = { 3,11,2,7,5 };

	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < (SIZE - i) - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
			}
		}
	}

	for (const int& element : list)
	{
		cout << element << " ";
	}

#pragma endregion

	return 0;
}