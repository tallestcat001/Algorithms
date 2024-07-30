#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Graph
{
private:
	class Edge
	{
	private:
		int x;
		int y;
		int distance;
	public:
		Edge(int x, int y, int distance)
		{
			this->x = x;
			this->y = y;
			this->distance = distance;
		}

		int& x()
		{
			return x;
		}

		int& y()
		{
			return y;
		}

		int& distance()
		{
			return distance;
		}
	};

	vector<Edge> graph;

public:
	Graph()
	{

	}

	void Insert(int x, int y, int distance)
	{
		graph.push_back(Edge(x, y, distance));
	}
};

int main()
{

#pragma region 신장 트리

	// 그래프의 모든 정점을 포함하면서 사이클이 존재하지 않는 
	// 부분 그래프로 그래프의 모든 정점을 최소 비용으로 연결하는 트리.

	// 그래프의 정점의 수가 n개 일때, 간선의 수는 n-1개.

	// 최소 비용 신장 트리
	// 그래프의 간선들의 가중치 합이 최소인 신장 트리.

	Graph graph;

	graph.Insert(1, 7, 10);
	graph.Insert(1, 4, 28);
	graph.Insert(1, 2, 66);
	graph.Insert(1, 5, 19);

	graph.Insert(2, 4, 25);
	graph.Insert(2, 5, 60);

	graph.Insert(3, 5, 21);
	graph.Insert(3, 6, 35);

	graph.Insert(4, 7, 15);

	graph.Insert(5, 6, 40);


#pragma endregion

	return 0;
}