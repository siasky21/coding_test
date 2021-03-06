#include <queue>
#include <string>
#include <iostream>

#define MAX 1000

using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int N, M;
int graph[MAX][MAX];
int cache[MAX][MAX][2];

int BFS()
{
	queue<pair<pair<int, int>, int>> q;
	q.push(make_pair(make_pair(0, 0), 1));
	cache[0][0][1] = 1;

	while (!q.empty())
	{
		int y = q.front().first.first;
		int x = q.front().first.second;
		int block = q.front().second;

		q.pop();

		if (y == N - 1 && x == M - 1)
		{
			return cache[y][x][block];
		}

		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (0 <= ny && ny < N && 0 <= nx && nx < M)
			{
				if (graph[ny][nx] == 1 && block)
				{
					cache[ny][nx][block - 1] = cache[y][x][block] + 1;
					q.push(make_pair(make_pair(ny, nx), block - 1));
				}
				else if (graph[ny][nx] == 0 && cache[ny][nx][block] == 0)
				{
					cache[ny][nx][block] = cache[y][x][block] + 1;
					q.push(make_pair(make_pair(ny, nx), block));
				}
			}
		}
	}
	return -1;
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string tmp;
		cin >> tmp;

		for (int j = 0; j < M; j++)
		{
			graph[i][j] = tmp[j] - '0';
		}
	}

	cout << BFS() << endl;
	return 0;
}