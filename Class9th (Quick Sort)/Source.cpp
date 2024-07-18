#include <iostream>

#define SIZE 8

using namespace std;

void QuickSort(int list[], int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int pivot = start;

	int left = start + 1;

	int right = end;

	while (left <= right)
	{
		while (left <= end && list[pivot] >= list[left])
		{
			left++;
		}

		while (right > start && list[pivot] <= list[right])
		{
			right--;
		}

		if (left > right)
		{
			swap(list[pivot], list[right]);
		}
		else
		{
			swap(list[left], list[right]);
		}
	}

	QuickSort(list, start, right - 1);
	QuickSort(list, right + 1, end);

}

int main()
{

#pragma region 퀵 정렬

	// 기준점을 획득한 다음 해당 기준점을 기준으로
	// 배열을 나누고 한 쪽에는 기준점보다 작은 값들이
	// 위치하고 다른 한 쪽에는 기준점보다 큰 값들이 
	// 위치하도록 정렬하는 알고리임.

	// 나누어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여 
	// 모든 배열이 기본 배열이 될 때까지 반복하면서 정렬함.

	int list[SIZE] = { 5,9,6,2,1,3,4,7 };

	QuickSort(list, 0, SIZE - 1);

	for (const int& element : list)
	{
		cout << element << " ";
	}

#pragma endregion

	return 0;
}