#include <string>
#include <stack>
#include <iostream>

using namespace std;

bool check(string str)
{
	stack<char> st;
	for (int j = 0; j < str.length(); j++)
	{
		if (str[j] == '(')
		{
			st.push(str[j]);
		}
		else
		{
			if (!st.empty())
			{
				st.pop();
			}
			else
			{
				return false;
			}
		}
	}

	return st.empty();
}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string vps;
		cin >> vps;

		if (check(vps))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}