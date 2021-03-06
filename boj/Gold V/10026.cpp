#include <queue>
#include <cstring>
#include <iostream>
#define MAX 100

using namespace std;

int N;
char MAP[MAX][MAX];
int visited[MAX][MAX];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

void BFS(int a, int b)
{
	queue<pair<int, int>> q;
	q.push(make_pair(a, b));
	visited[a][b] = true;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = dx[i] + x;
			int ny = dy[i] + y;

			if (nx >= 0 && nx < N && ny >= 0 && ny < N)
			{
				if (!visited[nx][ny])
				{
					if (MAP[nx][ny] == MAP[x][y])
					{
						visited[nx][ny] = true;
						q.push(make_pair(nx, ny));
					}
				}
			}
		}
	}
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> MAP[i][j];
		}
	}

	int ans1, ans2;
	ans1 = ans2 = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visited[i][j])
			{
				BFS(i, j);
				ans1++;
			}
		}
	}

	memset(visited, false, sizeof(visited));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (MAP[i][j] == 'G')
			{
				MAP[i][j] = 'R';
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visited[i][j])
			{
				BFS(i, j);
				ans2++;
			}
		}
	}

	cout << ans1 << ' ' << ans2 << endl;
	return 0;
}