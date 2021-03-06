#include <vector>
#include <cstring>
#include <iostream>

#define MAX 10001

using namespace std;

int n, End;
int sum = 0;
vector<pair<int, int>> graph[MAX];
bool visited[MAX];

void DFS(int start, int check_weight)
{
	if (visited[start])
	{
		return;
	}
	visited[start] = true;

	if (sum < check_weight)
	{
		sum = check_weight;
		End = start;
	}

	for (int i = 0; i < graph[start].size(); i++)
	{
		DFS(graph[start][i].first, check_weight + graph[start][i].second);
	}
}

int main()
{
	cin >> n;

	int parent, child, weight;
	for (int i = 0; i < n-1; i++)
	{
		cin >> parent >> child >> weight;
		graph[parent].push_back({ child, weight });
		graph[child].push_back({ parent, weight });
	}

	DFS(1, 0);

	sum = 0;
	memset(visited, false, sizeof(visited));

	DFS(End, 0);
	cout << sum;

	return 0;
}