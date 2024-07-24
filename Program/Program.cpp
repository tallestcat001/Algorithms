#include <iostream>

#define SIZE 11

using namespace std;

void Hanoi(int n, char from, char by, char to)
{

}

int main()
{

#pragma region 백 트레킹

	// 해를 찾아가는 도중 지금의 경로가 해가 될 것 같지 않으면,
	// 더이상 깊이 들어가지 않고 이전 단계로 다시 돌아가는 알고리즘.

	// 백 트래킹의 유망성 판단
	// 해가 될 만한지 판단한 후에 유망하지 않다고 결정되면,
	// 그 노도의 이전 노드로 돌아가 다음 자식 노드로 이동함.

	// 해가 될 만한 가능성이 있으면 유망하다. (Promising)
	// 유망하지 않은 노드에 가지 않는 것 (Pruning)



#pragma endregion

	return 0;
}