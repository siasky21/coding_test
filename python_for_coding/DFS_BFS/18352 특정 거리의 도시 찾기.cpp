#include <queue>
#include <vector>
#include <iostream>

using namespace std;

int N, M, K, X;
vector<int> graph[300001];
vector<int> d(300001, -1);

int main()
{
	cin >> N >> M >> K >> X;

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
	}

	d[X] = 0;

	queue<int> q;
	q.push(X);
	while (!q.empty())
	{
		int now = q.front();
		q.pop();

		for (int i = 0; i < graph[now].size(); i++)
		{
			int next = graph[now][i];

			if (d[next] == -1)
			{
				d[next] = d[now] + 1;
				q.push(next);
			}
		}
	}

	bool check = false;

	for (int i = 1; i <= N; i++)
	{
		if (d[i] == K)
		{
			cout << i << endl;
			check = true;
		}
	}

	if (!check)
	{
		cout << -1 << endl;
	}
	return 0;
}