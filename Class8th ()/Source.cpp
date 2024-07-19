#include <iostream>

#define SIZE 4

using namespace std;

int Find(int list[], int left, int right)
{
	if (left == right)
	{
		return list[left];
	}
	else
	{
		int maxLeft = Find(list, left, (left + right) / 2);
		int maxRight = Find(list, (left + right) / 2 + 1, right);

		if (maxLeft < maxRight)
		{
			return maxRight;
		}
		else
		{
			return maxLeft;
		}
	}
}

int main()
{
  
#pragma region 분활 정복

	// 주어진 문제를 2개 이상의 부분으로 문제를 나눈 뒤 각 부분 문제에 대한 답을 재귀 호출을 이용해서 계산한 다음,
	// 그 답으로부터 전체 문제의 답을 계산해내는 알고리즘.
	
	// 분활(Divide) : 주어진 문제를 두 개 혹은 그 이상의 형식으로 나눔.
	 
	// 정복(Conquer) : 나누어진 문제를 재귀적으로 해결해서 나누어진 문제를 더이상 나누어 문제가 필요 없을 때가지 계속 분활.
	
	// 통합(Combine) : 나누어서 해결한 문제들을 통합해서 원래 문제의 해답을 생성함.
	  
	int list[SIZE] = { 20,15,99,1 };

	cout << "배열의 최댓값은 : " << Find(list, 0, SIZE - 1) << endl;

#pragma endregion


	return 0;
}
