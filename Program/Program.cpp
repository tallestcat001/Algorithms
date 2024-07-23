#include <iostream>

#define SIZE 11

using namespace std;

int main()
{

#pragma region 최대공약수와 최소공배수

	int a = 15;
	int b = 30;
	int result = 0;

	for (int i = 2; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			result =+ i;
		}
	}

	cout << "최대공약수는 : " << result << endl;
	

#pragma endregion

	return 0;
}