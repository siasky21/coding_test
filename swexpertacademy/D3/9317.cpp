// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int TC;
	cin >> TC;

	for (int t = 1; t <= TC; t++)
	{
		int N, ans = 0;
		cin >> N;
		string alpha, seok;
		cin >> alpha >> seok;

		for (int i = 0; i < N; i++)
		{
			if (alpha[i] == seok[i])
			{
				ans++;
			}
		}
		cout << "#" << t << " " << ans << endl;
	}
	return 0;
}