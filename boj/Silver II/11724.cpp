#include <vector>
#include <iostream>

using namespace std;

vector<int> arr[1001];
bool visited[1001];

void dfs(int start)
{
	visited[start] = true;
	for (int i = 0; i < arr[start].size(); i++)
	{
		int next = arr[start][i];
		if (!visited[next])
		{
			dfs(next);
		}
	}
}

int main()
{
	int N, M;

	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;

		arr[u].push_back(v);
		arr[v].push_back(u);
	}

	int cnt = 0;
	for (int i = 1; i <= N; i++)
	{
		if (!visited[i])
		{
			cnt++;
			dfs(i);
		}
	}

	cout << cnt << endl;
	return 0;
}