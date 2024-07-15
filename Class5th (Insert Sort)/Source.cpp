#include <iostream>

#define SIZE 5

using namespace std;

int main()
{

#pragma region 삽입 정렬

	// 데이터를 하나씩 확인하면서 이미 정렬된 부분을 비교하여 자신의 위치를 찾아 삽입하는 방식으로 정렬하는 알고리즘.

	int list[SIZE] = { 7,3,1,9,5 };

	for (int i = 1; i < SIZE; i++)
	{
		int key = list[i];

		for (int j = 0; j < SIZE; j++)
		{
			if (key < list[j])
			{
				int temp = list[j];
				list[j] = key;
				key = temp;
			}
		}

		list[i] = key;

	}

	for (const int& element : list)
	{
		cout << element << " ";
	}

#pragma endregion

	return 0;
}