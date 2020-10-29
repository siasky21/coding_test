// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		int N;
		cin >> N;
		int ans = 0;
		bool flag = false;

		for (int j = 1; j <= N; j++)
		{
			if (flag)
			{
				ans -= j;
				flag = false;
			}
			else
			{
				ans += j;
				flag = true;
			}
		}
		cout << "#" << i << " " << ans << endl;
	}
	return 0;
}