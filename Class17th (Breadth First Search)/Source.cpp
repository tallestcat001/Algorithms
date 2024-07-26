﻿#include <iostream>
#include <queue>
#include <vector>

#define SIZE 6

using namespace std;

class Graph
{
private:
	queue<int> queue;
	bool visited[SIZE];
	vector<int> graph[SIZE];
public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}

	void Insert(int vertex, int edge)
	{
		graph[vertex].push_back(edge);
		graph[edge].push_back(vertex);
	}

	void Search(int start)
	{
		queue.push(start);
		visited[start] = true;

		while (queue.empty() == false)
		{
			int x = queue.front();

			queue.pop();

			cout << x << " ";

			for (int i = 0; i < graph[x].size(); i++)
			{
				int next = graph[x][i];

				if (visited[next] == false)
				{
					queue.push(next);
					visited[next] = true;
				}
			}
		}
	}
};

int main()
{

#pragma region 넓이 우선 탐색

	// 시작 정점을 방문한 후 시작 정점에 인접한 모든 정점들을 우선 방문하는 알고리즘.

	// 더 이상 방문하지 않은 정점이 없을 때까지 방문하지 않은 모든 정점들에 대해서 너비 우선 탐색을 적용함.

	Graph graph;

	graph.Insert(1, 2);
	graph.Insert(1, 3);

	graph.Insert(2, 4);

	graph.Insert(3, 4);
	graph.Insert(3, 5);

	graph.Insert(4, 5);

	graph.Search(1);

#pragma endregion

	return 0;
}