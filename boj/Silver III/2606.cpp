#include <queue>
#include <iostream>

using namespace std;

int num, idx, cnt;
int arr[101][101];
bool visited[101];

void dfs(int node)
{
	visited[node] = 1;

	for (int i = 1; i <= num; i++)
	{
		if (!visited[i] && arr[node][i] == 1)
		{
			cnt++;
			dfs(i);
		}
	}
}

int main()
{
	cin >> num;
	cin >> idx;

	for (int i = 0; i < idx; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}

	dfs(1);
	cout << cnt << endl;

	return 0;
}