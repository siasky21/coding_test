// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; t++)
	{
		string str, ans = "";
		cin >> str;
		int alpha [26] = { 0, };

		for (int i = 0; i < str.length(); i++)
		{
			alpha[str[i] - 'a']++;
		}

		for (int i = 0; i < 26; i++)
		{
			if (alpha[i] % 2 != 0)
			{
				ans += i + 'a';
			}
		}

		if (ans == "")
		{
			ans = "Good";
		}

		cout << "#" << t << " " << ans << endl;
	}
	return 0;
}