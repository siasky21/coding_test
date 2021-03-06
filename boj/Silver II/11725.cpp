#include <queue>
#include <vector>
#include <iostream>
#define MAX 100001

using namespace std;

int parent[MAX];
vector<int> node[MAX];

void bfs()
{
	queue<pair<int, int>> q;
	for (int i = 0; i < node[1].size(); i++)
	{
		q.push({ 1, node[1].at(i) });
	}

	while (q.size())
	{
		pair<int, int> sub = q.front();
		q.pop();

		parent[sub.second] = sub.first;

		for (int i = 0; i < node[sub.second].size(); i++)
		{
			if (parent[node[sub.second].at(i)] == 0)
			{
				q.push({ sub.second, node[sub.second].at(i) });
			}
		}
	}
}

int main()
{
	int N;

	cin >> N;

	for (int i = 0; i < N-1; i++)
	{
		int u, v;
		cin >> u >> v;
		node[u].push_back(v);
		node[v].push_back(u);
	}

	parent[1] = -1;
	bfs();

	for (int i = 2; i <= N; i++)
	{
		cout << parent[i] << "\n";
	}

	return 0;
}