#include <queue>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int N;
	string oper;
	queue<int> q;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> oper;

		if (oper == "push")
		{
			int x;
			cin >> x;
			q.push(x);
		}
		else if (oper == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << "\n";
				q.pop();
			}
			else
			{
				cout << "-1" << "\n";
			}
		}
		else if (oper == "size")
		{
			cout << q.size() << "\n";
		}
		else if (oper == "empty")
		{
			if (!q.empty())
			{
				cout << "0" << "\n";
			}
			else
			{
				cout << "1" << "\n";
			}
		}
		else if (oper == "front")
		{
			if (!q.empty())
			{
				cout << q.front() << "\n";
			}
			else
			{
				cout << "-1" << "\n";
			}
		}
		else if (oper == "back")
		{
			if (!q.empty())
			{
				cout << q.back() << "\n";
			}
			else
			{
				cout << "-1" << "\n";
			}
		}
	}
	return 0;
}
