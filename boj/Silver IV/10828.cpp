#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int N;
	stack<int> st;
	string oper;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> oper;

		if (oper == "push")
		{
			int num;
			cin >> num;
			st.push(num);
		}
		else if (oper == "pop")
		{
			if (st.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << st.top() << "\n";
				st.pop();
			}
		}
		else if (oper == "size")
		{
			cout << st.size() << "\n";
		}
		else if (oper == "empty")
		{
			if (st.empty())
			{
				cout << "1" << "\n";
			}
			else
			{
				cout << "0" << "\n";
			}
		}
		else if (oper == "top")
		{
			if (st.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << st.top() << "\n";
			}
		}
	}
	return 0;
}