#include <deque>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int N;
	string oper;
	deque<int> dq;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> oper;

		if (oper == "push_front")
		{
			int x;
			cin >> x;
			dq.push_front(x);
		}
		else if (oper == "push_back")
		{
			int x;
			cin >> x;
			dq.push_back(x);
		}
		else if (oper == "pop_front")
		{
			if (!dq.empty())
			{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else
			{
				cout << "-1" << "\n";
			}
		}
		else if (oper == "pop_back")
		{
			if (!dq.empty())
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else
			{
				cout << "-1" << "\n";
			}
		}
		else if (oper == "size")
		{
			cout << dq.size() << "\n";
		}
		else if (oper == "empty")
		{
			if (!dq.empty())
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
			if (!dq.empty())
			{
				cout << dq.front() << "\n";
			}
			else
			{
				cout << "-1" << "\n";
			}
		}
		else if (oper == "back")
		{
			if (!dq.empty())
			{
				cout << dq.back() << "\n";
			}
			else
			{
				cout << "-1" << "\n";
			}
		}
	}
	return 0;
}
