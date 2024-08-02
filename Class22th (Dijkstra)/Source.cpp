#include <iostream>

#define SIZE 6
#define INF 10000000

using namespace std;

class Graph
{
private:
	int weight[SIZE][SIZE] =
	{
		{0,2,5,3,INF,INF},
		{2,0,7,INF,INF,9},
		{5,7,0,1,2,5},
		{3,INF,1,0,7,INF},
		{INF,INF,2,7,0,2},
		{INF,9,5,INF,2,0},
	};

	bool visited[SIZE];
	int distance[SIZE];
public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = 0;
		}

	}

	int Find()
	{
		int min = INF;
		int position = 0;

		for (int i = 0; i < SIZE; i++)
		{
			if (distance[i] < min && visited[i] == false)
			{
				min = distance[i];
				position = i;
			}
		}

		return position;
	}

	void Dijkstra(int start)
	{
		for (int i = 0; i < SIZE; i++)
		{
			distance[i] = weight[start][i];
		}

		visited[start] = true;

		for (int i = 0; i < SIZE - 1; i++)
		{
			int minNode = Find();

			visited[minNode] = true;

			for (int j = 0; j < SIZE; j++)
			{
				if (visited[j] == false)
				{
					if (distance[minNode] + weight[minNode][j] < distance[j])
					{
						distance[j] = distance[minNode] + weight[minNode][j];
					}
				}
			}
		}

		for (int i = 0; i < SIZE; i++)
		{
			cout << distance[i] << " ";
		}
	}
};

int main()
{

#pragma region 다익스트라 알고리즘

	// 시작점으로 부터 모든 노드까지의 최소 거리를 구해주는 알고리즘.

	// 1. distance 배열에 weight[시작점 노드]의 값들로 초기화함.

	// 2. 시작점을 방문처리함.

	// 3. distance 배열에서 최소 비용 노드를 찾고 방문 처리함.
	// 단, 이미 방문한 노드는 제외.

	// 4. 최소 비용 노드를 거쳐갈 지 고민해서 distance 배열을 갱신함.
	// 단, 이미 방문한 노드는 제외.

	// 5. 모든 노드를 방문할 때까지 3 ~  4번을 반복.

	// 방문하지 않은 노드 중에서 가장 작은 distance를 가진 노드를 방문하고, 그 노드와 연결된 다른 노드까지의 거리를 계산함. 

	Graph graph;

	graph.Dijkstra(0);

#pragma endregion

	return 0;
}