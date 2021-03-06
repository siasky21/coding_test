#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s;
	stack<char> st;
	string result;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			result += s[i];
		}
		else
		{
			if (s[i] == '(')
			{
				st.push(s[i]);
			}
			else if (s[i] == '*' || s[i] == '/')
			{
				while (!st.empty() && (st.top() == '*' || st.top() == '/'))
				{
					result += st.top();
					st.pop();
				}
				st.push(s[i]);
			}
			else if (s[i] == '+' || s[i] == '-')
			{
				while (!st.empty() && st.top() != '(')
				{
					result += st.top();
					st.pop();
				}
				st.push(s[i]);
			}
			else if (s[i] == ')')
			{
				while (!st.empty() && st.top() != '(')
				{
					result += st.top();
					st.pop();
				}
				st.pop();
			}
		}
	}
	while (!st.empty())
	{
		result += st.top();
		st.pop();
	}
	cout << result << endl;
	return 0;
}