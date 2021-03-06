#include <queue>
#include <iostream>

using namespace std;

int N, M, V;
int graph[1001][1001];
bool visited[1001];
queue<int> q;

void DFS(int idx)
{
	cout << idx << " ";

	for (int i = 1; i <= N; i++)
	{
		if (graph[idx][i] && !visited[i])
		{
			visited[i] = true;
			DFS(i);
		}
	}
}

void BFS(int idx)
{
	q.push(idx);
	visited[idx] = true;

	while (!q.empty())
	{
		idx = q.front();
		q.pop();

		cout << idx << " ";

		for (int i = 1; i <= N; i++)
		{
			if (graph[idx][i] && !visited[i])
			{
				visited[i] = true;
				q.push(i);
			}
		}
	}
}

int main()
{
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;

		graph[u][v] = 1;
		graph[v][u] = 1;
	}

	visited[V] = 1;
	DFS(V);
	cout << "\n";

	fill_n(visited, 1001, false);
	BFS(V);

	cout << "\n";
	return 0;
}