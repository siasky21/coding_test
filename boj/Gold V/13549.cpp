#include <deque>
#include <iostream>

#define MAX 100001

using namespace std;

int N, K;
int visited[MAX];

int bfs()
{
	deque<int> dq;
	dq.push_back(N);
	visited[N] = 1;

	while (!dq.empty())
	{
		int pos_x = dq.front();
		dq.pop_front();

		if (pos_x == K)
		{
			return visited[K] - 1;
		}

		if (pos_x * 2 < MAX && !visited[pos_x * 2])
		{
			dq.push_front(pos_x * 2);
			visited[pos_x * 2] = visited[pos_x];
		}

		if (pos_x + 1 < MAX && !visited[pos_x + 1])
		{
			dq.push_back(pos_x + 1);
			visited[pos_x + 1] = visited[pos_x] + 1;
		}

		if (pos_x - 1 >= 0 && !visited[pos_x - 1])
		{
			dq.push_back(pos_x - 1);
			visited[pos_x - 1] = visited[pos_x] + 1;
		}
	}
}

int main()
{
	cin >> N >> K;

	cout << bfs() << endl;
	return 0;
}