#include <iostream>

#define SIZE 8

using namespace std;

void Merge(int list[], int start, int middle, int end)
{
	int count = 0;
	int left = start;
	int right = middle + 1;

	int* temporary = new int[end - start + 1];

	while (left <= middle && right <= end)
	{
		if (list[left] <= list[right])
		{
			temporary[count++] = list[left++];
		}
		else
		{
			temporary[count++] = list[right++];
		}
	}

	while (left <= middle)
	{
		temporary[count++] = list[left++];
	}

	while (right <= end)
	{
		temporary[count++] = list[right++];
	}

	for (int i = 0; i < end - start + 1; i++)
	{
		list[start + i] = temporary[i];
	}

	delete temporary;
}

void MergSort(int list[], int start, int end)
{
	if (start < end)
	{
		int middle = (start + end) / 2;

		MergSort(list, start, middle);
		MergSort(list, middle + 1, end);
		Merge(list, start, middle, end);
	}
}

int main()
{
#pragma region 병합 정렬

	// 하나의 리스트를 두 개의 균등한 크기로 분활하고 분활된 부분 리스트를 정렬한 다음, 두 개의 정렬된 부분 리스트를 합하여
	// 전체가 정렬된 리스트가 되게 하는 방법.

	// 1. 리스트의 길이가 0 또는 1이면 이미 정렬된 것으로 봄.

	// 2. 그렇지 않은 경우 

	// 2-1. 정렬되지 않은 리스트를 절반으로 잘라 비슷한 크기의 두 부분 리스트로 나눔.

	// 2-2. 각 부분 리스트를 재귀적으로 병합 정렬을 이용하여 정렬함.

	// 2-3. 두 부분 리스트를 다시 하나의 정렬된 리스트로 병합함.

	int list[SIZE] = { 3,5,2,7,4,1,8,6 };

	MergSort(list, 0, SIZE - 1);

	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}

#pragma endregion

	return 0;
}