﻿#include <iostream>

#define SIZE 5

using namespace std;

int main()
{

#pragma region 투 포인터

	// 두 개의 포인터를 활용하여 배열의 요소를 효과적으로 선택하는 알고리즘.

	// 1. 시작점과 끝나는 지점이 첫번째 원소를 가리키도록 함.

	// 2. 현재 부분합이 m과 같다면 count를 증가시킴.

	// 3. 현재 부분합이 m보다 작다면 end를 1 증가시킴.

	// 4. 현재 부분합이 m보다 크거나 같다면 start를 1 증가시킴.

	int count = 0;
	int sum = 0;

	int start = 0;
	int end = 0;

	int m = 5;

	int list[SIZE] = { 1,2,5,2,5 };

	while (start <= end)
	{
		if (sum >= m)
		{
			sum -= list[start++];
		}
		else if (end >= SIZE)
		{
			break;
		}
		else
		{
			sum += list[end++];
		}

		if (sum == m)
		{
			count++;
		}
	}

	cout << "count의 값은 : " << count << endl;

#pragma endregion

	return 0;
}