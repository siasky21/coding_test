#include <queue>
#include <iostream>
#include <functional>

using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	while(N--)
	{
		int num;
		cin >> num;

		if (num == 0)
		{
			if (pq.empty())
			{
				cout << "0" << "\n";
			}
			else
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else
		{
			pq.push(num);
		}
	}
	return 0;
}