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

	for (int i = 1; i <= T; i++)
	{
		string pal, tmp = "";
		int ans = 1;
		cin >> pal;

		for (int j = pal.length() - 1; j >= 0; j--)
		{
			tmp += pal[j];
		}

		if (pal != tmp)
		{
			ans = 0;
		}

		cout << "#" << i << " " << ans << endl;
	}
	return 0;
}