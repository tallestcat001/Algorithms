#include <iostream>
#include <vector>

#define SIZE 8

using namespace std;

class Graph
{
private:
	bool Visited[SIZE];
	vector<int> graph[SIZE];
public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			Visited[i] = false;
		}
	}

	void Insert(int vertex, int edge)
	{
		graph[vertex].push_back(edge);
		graph[edge].push_back(vertex);
	}

	void Search(int start)
	{
		Visited[start] = true;

		cout << start << " ";

		for (int i = 0; i < graph[start].size(); i++)
		{
			int next = graph[start][i];

			if (Visited[next] == false)
			{
				Search(next);
			}
		}
	}
};

int main()
{

#pragma region 깊이 우선 탐색

	// root 노드에서 시작해서 다음 분기로 넘어가기 전에 해당 분기를 완벽하게 탐색하는 탐색 알고리즘.

	// 1. 시작 노드를 스텍에 넣고 방문처리를함.

	// 2. 스텍에 최상단 노드에 방문하지 않은 인접 노드가 있으면, 해당 노드를 스텍에 넣고 방문처리함.

	// 3. 방문하지 않은 인접 노드가 없다면 스텍에서 최상단 노드를 꺼냄.

	// 4. 더 이상 2번의 과정을 수행할수 없을 때까지 반복함.

	Graph graph;
	graph.Insert(1, 2);
	graph.Insert(1, 3);

	graph.Insert(2, 3);
	graph.Insert(2, 4);
	graph.Insert(2, 5);

	graph.Insert(3, 6);
	graph.Insert(3, 7);

	graph.Insert(4, 5);

	graph.Insert(6, 7);

	graph.Search(1);

#pragma endregion

	return 0;
}