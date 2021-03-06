#include <queue>
#include <iostream>
#define MAX 1000001

using namespace std;

int N, K;
bool visited[MAX];

int bfs(int N, int K)
{
	queue<pair<int, int>> q;
	q.push(make_pair(N, 0));
	visited[N] = true;

	while (!q.empty())
	{
		int line = q.front().first;
		int time = q.front().second;
		q.pop();

		if (line == K)
		{
			return time;
		}

		if (line + 1 < MAX && !visited[line + 1])
		{
			q.push(make_pair(line + 1, time+1));
			visited[line + 1] = true;
		}
		if (line - 1 >= 0 && !visited[line - 1])
		{
			q.push(make_pair(line - 1, time + 1));
			visited[line - 1] = true;
		}
		if (line * 2 < MAX && !visited[line * 2])
		{
			q.push(make_pair(line * 2, time + 1));
			visited[line * 2] = true;
		}
	}
}

int main()
{
	cin >> N >> K;
	cout << bfs(N, K) << endl;
	return 0;
}