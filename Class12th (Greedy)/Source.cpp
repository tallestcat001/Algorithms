#include <iostream>

#define SIZE 100001

using namespace std;

int Greedy(int n)
{
	int count = 0;

	while (n >= 10)
	{
		if (n >= 1000)
		{
			n -= 1000;
			count++;
		}
		else if (n >= 500)
		{
			n -= 500;
			count++;
		}
		else if (n >= 100)
		{
			n -= 100;
			count++;
		}
		else if (n >= 50)
		{
			n -= 50;
			count++;
		}
		else if (n >= 10)
		{
			n -= 10;
			count++;
		}
	}
	return count;
}

int main()
{

#pragma region 탐욕법

	// 최적의 해를 구하는 데에 사용되는 근사적인 방법으로 
	// 여러 경우는 하나를 결정해야 할 때마다 그 순간에 최적이라고 생각되는 것을 
	// 선택해 나가는 방식으로 진행하여 최종적인 해답을 구하는 알고리즘.

	// 1. 탐욕 선택 속성
	// 각 단계에서 '최적의 선택'을 했을 때 전체 문제에 대한 최적의 해를 구할 수 있는 경우

	// 2. 최적 부분 구조
	// 전체 문제의 최적의 해가 '부분 문제의 최적의 해로 구성'될수 있는 경우.

	// 그리드 알고리즘 단계

	// 1. 문제의 최적해를 결정함.

	// 2. 문제의 구조에 맞게 선택 절차를 정의함.

	// 3. 선택 절차에 따라 선택을 수행함.

	// 4. 선택된 해가 문제의 조건을 만족하는지 검사함.

	// 5. 조건을 만족하지 않으면 해당 해를 제외함.

	// 6. 모든 선택이 완료되면 해답을 검사함.

	// 7. 조건을 만족하지 않으면 해답으로 인정하지 않음.

	int money = 1370;

	cout << Greedy(money) << endl;

#pragma endregion

	return 0;
}