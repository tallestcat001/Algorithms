﻿#include <iostream>

using namespace std;

int main()
{

#pragma region 시간 복잡도

	// 특정 크기의 입력을 기준으로 할 때 필요한 연산 횟수를 의미함.

#pragma region O(1) 상수 시간

	// 입력 크기와 상관없이 일정한 시간 복잡도를 가지는 시간.

	// ex) 배열의 요소 참조

#pragma endregion

#pragma region O(log n) 로그 시간

	// 데이터의 크기에 따라 실행 시간이 로그 함수 형태로 증가하는 시간 복잡도.

	// ex) 이진 탐색

#pragma endregion

#pragma region O(n) 선형 시간

	// 입력에 따라 걸리는 시간이 선형적으로 증가되는 시간 복잡도.

	// ex) for문

#pragma endregion

#pragma region O(n²) 제곱 시간

	// 입력되는 데이터를 기준으로 n²만큼 시간이 증가하는 시간 복잡도.

	// ex) 이중 for문

#pragma endregion

#pragma endregion

#pragma region 공간 복잡도

	// 프로그램 실행과 완료에 따라 얼마나 많은 공간이 필요한지 나타내는 척도.

#pragma region 고정 공간

	// 코드가 저장되는 공간으로 알고리즘 실행을 위해 시스템이 필요로 하는 공간.

	// ex) 배열

#pragma endregion

#pragma region 가변 공간

	// 문제를 해결하기 위해 알고리즘이 필요한 공간으로 순환 프로그램일 경우 순환 스택을 의미함.

	// ex) 재귀 함수

#pragma endregion

#pragma endregion

#pragma region 브루트 포스

	// 가능한 모든 경우의 수를 탐색하면서 결과를 도출하는 알고리즘.

#pragma region 비밀번호

	int PW[3] = { 3,5,7 };

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				if (PW[0] == i && PW[1] == j && PW[2] == k)
				{
					cout << "비밀번호 해제" << endl;
					cout << PW[0] << PW[1] << PW[2] << endl;
				}
			}
		}
	}

#pragma endregion

#pragma endregion

	return 0;
}
