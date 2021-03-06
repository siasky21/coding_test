#include <stack>
#include <iostream>

using namespace std;

int main()
{
	int n, x, max = 0;
	cin >> n;

	stack<int> st;
	char ans[200050];
	int ptr = 0;

	while (n--)
	{
		cin >> x;
		if (x > max)
		{
			for (int i = max + 1; i <= x; i++)
			{
				st.push(i);
				ans[ptr++] = '+';
			}
		}
		else
		{
			if (st.top() != x)
			{
				cout << "NO";
				return 0;
			}
		}
		st.pop();
		ans[ptr++] = '-';
		if (max < x)
		{
			max = x;
		}
	}

	for (int i = 0; i < ptr; i++)
	{
		cout << ans[i] << "\n";
	}

	return 0;
}