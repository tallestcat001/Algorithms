#include <iostream>

#define SIZE 7

using namespace std;

int Gap()
{
	int gap = SIZE / 2;

	if (gap % 2 == 0)
	{
		gap = gap + 1;
		return gap;
	}
}

int main()
{

#pragma region 쉘 정렬

	// 먼 거리의 요소들을 먼저 정렬하여 배열을 부분적으로 정렬한 후 점진적으로 더 작은 간격을 사용하는 정렬 알고리즘.



#pragma endregion

	return 0;
}