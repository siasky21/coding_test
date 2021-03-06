#include <queue>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>

#define MAX 20
#define MIN 987654321

using namespace std;

int N, result, eat_dist, shark_x, shark_y, shark_size = 2,  eat_cnt = 0;
int MAP[MAX][MAX];
int visited[MAX][MAX];

int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };

vector<pair<pair<int, int>, int>> Eat;

void BFS(int a, int b)
{
	eat_dist = MIN;
	Eat.clear();
	memset(visited, 0, sizeof(visited));
	queue<pair<int, int>> q;
	q.push(make_pair(a, b));

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
			if (!visited[nx][ny] && shark_size >= MAP[nx][ny])
			{
				visited[nx][ny] = visited[x][y] + 1;

				if (MAP[nx][ny] > 0 && MAP[nx][ny] < shark_size)
				{
					if (eat_dist >= visited[nx][ny])
					{
						eat_dist = visited[nx][ny];
						Eat.push_back(make_pair(make_pair(eat_dist, nx), ny));
					}
				}
				q.push(make_pair(nx, ny));
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

			if (MAP[i][j] == 9)
			{
				shark_x = i;
				shark_y = j;
				MAP[i][j] = 0;
			}
		}
	}

	while (1)
	{
		BFS(shark_x, shark_y);

		if (Eat.empty()) break;
		else
		{
			sort(Eat.begin(), Eat.end());
			eat_cnt++;
			result += Eat[0].first.first;
			MAP[Eat[0].first.second][Eat[0].second] = 0;
			shark_x = Eat[0].first.second;
			shark_y = Eat[0].second;	
			if (shark_size == eat_cnt)
			{
				shark_size++;
				eat_cnt = 0;
			}
		}
	}

	cout << result;
	return 0;
}
