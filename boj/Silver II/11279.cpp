#include <queue>
#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	priority_queue<int> pq;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;

		if (x == 0)
		{
			if (!pq.empty())
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else
		{
			pq.push(x);
		}
	}
	return 0;
}