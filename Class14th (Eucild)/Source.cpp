#include <iostream>
#include <math.h>

#define SIZE 11

using namespace std;

int Eucild(int a, int b)
{
	int c = 0;

	while (b != 0)
	{
		c = a % b;

		if (c == 0)
		{
			return b;
		}

		a = b;
		b = c;
	}
}

int main()
{

#pragma region 유클리트 호제법

	// 2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로,
	// 두 수가 사로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘.

	cout << "최대공약수는 : " << Eucild(30, 15) << " ";

#pragma endregion

	return 0;
}