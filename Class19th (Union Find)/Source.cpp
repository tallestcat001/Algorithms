﻿#include <iostream>

#define SIZE 7

using namespace std;

class Graph
{
private:
	int parent[SIZE];
public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			parent[i] = 0;
		}
	}

	int Find(int x)
	{
		if (x == parent[x])
		{
			return x;
		}
		else
		{
			return parent[x] = Find(parent[x]);
		}
	}

	void Union(int x, int y)
	{
		x = Find(x);
		y = Find(y);

		if (x < y)
		{
			parent[y] = x;
		}
		else
		{
			parent[x] = y;
		}
	}

	bool Same(int x, int y)
	{
		return Find(x) == Find(y);
	}
};

int main()
{

#pragma region 유니온 파인드

	// 여러 노드가 존재할 때 어떤 노드가 다른 노드와 연결되어 있는지 확인하는 알고리즘.

	// 유니온 파인드의 시간 복잡도
	// O(MlogN) : M은 연산의 개수, N은 노드의 개수
	// M이 N²에 가까울 때는 O(N²lonN)이 됨.

	Graph graph;

	graph.Union(2, 3);
	graph.Union(1, 3); // 1 2 1

	cout << graph.Same(2, 3) << endl;
	cout << graph.Same(1, 3) << endl;

#pragma endregion

	return 0;
}