#include <queue>
#include <iostream>

using namespace std;

int main()
{
	int T, count = 0;
	cin >> T;

	int N, M, imp;

	for (int i = 0; i < T; i++)
	{
		count = 0;
		cin >> N >> M;
		queue<pair<int, int>> q;
		priority_queue<int> pq;

		for (int j = 0; j < N; j++)
		{
			cin >> imp;
			q.push({ j, imp });
			pq.push(imp);
		}

		while (!q.empty())
		{
			int idx = q.front().first;
			int val = q.front().second;
			q.pop();

			if (pq.top() == val)
			{
				pq.pop();
				count++;
				if (idx == M)
				{
					cout << count << endl;
					break;
				}
			}
			else
			{
				q.push({ idx, val });
			}
		}
	}
	return 0;
}