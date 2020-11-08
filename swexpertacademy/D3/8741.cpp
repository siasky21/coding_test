// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int T;
	string input;
	cin >> T;
	getline(cin, input);

	for (int t = 1; t <= T; t++)
	{
		getline(cin, input);
		string ans = "";

		int idx = 0;

		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == ' ')
			{
				idx = -1;
			}
			else
			{
				if (idx == 0)
				{
					ans += toupper(input[i]);
				}
			}
			idx++;
		}
		cout << "#" << t << " " << ans << endl;
	}
	return 0;
}