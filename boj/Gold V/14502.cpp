#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int ans = 0;
int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };

void bfs(vector<vector<int>> map)
{
	queue<pair<int, int>> q;
	for (int i = 0; i < map.size(); i++)
	{
		for (int j = 0; j < map[i].size(); j++)
		{
			if (map[i][j] == 2)
			{
				q.emplace(i, j);
			}
		}
	}

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx > -1 && nx < map.size() && ny > -1 && ny < map[x].size() && map[nx][ny] == 0)
			{
				q.emplace(nx, ny);
				map[nx][ny] = 2;
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < map.size(); i++)
	{
		for (int j = 0; j < map[i].size(); j++)
		{
			if (map[i][j] == 0)
			{
				cnt++;
			}
		}
	}
	ans = max(ans, cnt);
}

void dfs(vector<vector<int>> map, int x, int y, int cnt)
{
	map[x][y] = 1;

	if (cnt == 0)
	{
		bfs(map);
		return;
	}

	for (int i = x; i < map.size(); i++)
	{
		for (int j = 0; j < map[i].size(); j++)
		{
			if (map[i][j] == 0)
			{
				dfs(map, i, j, cnt - 1);
			}
		}
	}
}

int main()
{
	int N, M;
	cin >> N >> M;

	vector<vector<int>> map(N, vector<int>(M));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (map[i][j] == 0)
			{
				dfs(map, i, j, 2);
			}
		}
	}
	cout << ans << endl;
	return 0;
}