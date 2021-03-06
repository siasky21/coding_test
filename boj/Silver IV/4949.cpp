#include <string>
#include <stack>
#include <iostream>

using namespace std;

int main()
{
	while (true)
	{
		string tmp;
		getline(cin, tmp);

		if (tmp.length() == 1 && tmp[0] == '.')
		{
			break;
		}

		bool flag = true;
		stack<char> st;

		for (int i = 0; i < tmp.length(); i++)
		{
			if (tmp[i] == '(')
			{
				st.push('(');
			}
			else if (tmp[i] == '[')
			{
				st.push('[');
			}
			else if (tmp[i] == ']')
			{
				if (!st.empty() && st.top() == '[')
				{
					st.pop();
				}
				else
				{
					flag = false;
					break;
				}
			}
			else if (tmp[i] == ')')
			{
				if (!st.empty() && st.top() == '(')
				{
					st.pop();
				}
				else
				{
					flag = false;
					break;
				}
			}
		}

		if (st.empty() && flag)
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}
	return 0;
}