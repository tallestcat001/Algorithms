#include <iostream>

#define SIZE 5

using namespace std;

int main()
{

#pragma region 누적 합

	// 특정한 배열이 있을 때 배열까지의 합을 나타내는 것.

	int one[SIZE] = { 1,2,3,4,5 };
	int two[SIZE] = { 0,0,0,0,0 };

	two[0] = one[0];

	for (int i = 1; i < SIZE; i++)
	{
		two[i] = two[i - 1] + one[i];
		
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << two[i] << " ";
	}

#pragma endregion

	return 0;
}