#include <cstring>
#include <iostream>

using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int arr[50][50];
int visited[50][50];
int M, N, K;

void dfs(int y, int x)
{
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= N || nx < 0 || nx >= M)
		{
			continue;
		}

		if (arr[ny][nx] && !visited[ny][nx])
		{
			visited[ny][nx]++;
			dfs(ny, nx);
		}
	}
}

int main()
{
	int T;
	cin >> T;

	for (int t = 0; t < T; t++)
	{
		cin >> M >> N >> K;
		memset(arr, 0, sizeof(arr));
		memset(visited, 0, sizeof(visited));

		for (int i = 0; i < K; i++)
		{
			int x, y;
			cin >> x >> y;
			arr[y][x] = 1;
		}

		int ans = 0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (arr[i][j] && !visited[i][j])
				{
					ans++;
					visited[i][j]++;
					dfs(i, j);
				}
			}
		}

		cout << ans << "\n";
	}
	return 0;
}