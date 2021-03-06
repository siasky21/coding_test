// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stack>
#include <iostream>

using namespace std;

int main()
{
	int TC;
	cin >> TC;

	for (int t = 1; t <= TC; t++)
	{
		int K;
		cin >> K;
		stack<int> st;
		int ans = 0;

		for (int i = 0; i < K; i++)
		{
			int num;
			cin >> num;

			if (num != 0)
			{
				st.push(num);
			}
			else
			{
				st.pop();
			}
		}

		if (st.empty())
		{
			cout << "#" << t << " " << "0" << endl;
		}
		else
		{
			while (!st.empty())
			{
				ans += st.top();
				st.pop();
			}
			cout << "#" << t << " " << ans << endl;
		}
	}
	return 0;
}