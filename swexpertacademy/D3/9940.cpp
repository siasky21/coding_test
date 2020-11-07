// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int TC;
	cin >> TC;

	for (int T = 1; T <= TC; T++)
	{
		int N;
		cin >> N;
		bool check[100001] = { 0, };
		bool flag = false;

		for (int i = 0; i < N; i++)
		{
			int num;
			cin >> num;
			if (!check[num])
			{
				check[num] = true;
			}
			else
			{
				flag = true;
			}
		}

		if (!flag)
		{
			cout << "#" << T << " Yes" << endl;
		}
		else
		{
			cout << "#" << T << " No" << endl;
		}

	}
	return 0;
}