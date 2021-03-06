#include <queue>
#include <iostream>

using namespace std;

int main()
{
	int N, K;
	int count = 0;
	queue<int> q;

	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}

	cout << "<";
	while (!q.empty())
	{
		for (int i = 1; i < K; i++)
		{
			q.push(q.front());
			q.pop();
		}
		if (q.size() == 1)
		{
			cout << q.front() << ">";
			q.pop();
		}
		else
		{
			cout << q.front() << ", ";
			q.pop();
		}
	}
	return 0;
}