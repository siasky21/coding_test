#include <vector>
#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int V;
bool visited[100001];
vector<pair<int, int>> graph[100001];

int diameter = 0;
int farNode = 0;

void DFS(int node, int cost)
{
	if (visited[node])
	{
		return;
	}

	visited[node] = true;

	if (diameter < cost)
	{
		diameter = cost;
		farNode = node;
	}

	for (int i = 0; i < graph[node].size(); i++)
	{
		DFS(graph[node][i].first, cost + graph[node][i].second);
	}
}

int main()
{
	cin >> V;

	for (int i = 0; i < V; i++)
	{
		int node;
		cin >> node;

		while (1)
		{
			int node2, cost;
			cin >> node2;
			if (node2 == -1)
			{
				break;
			}

			cin >> cost;
			graph[node].push_back({ node2, cost });
		}
	}

	memset(visited, false, sizeof(visited));

	DFS(1, 0);

	memset(visited, false, sizeof(visited));

	diameter = 0;
	DFS(farNode, 0);

	cout << diameter << "\n";
	return 0;
}