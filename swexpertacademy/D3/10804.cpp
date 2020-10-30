// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		string tmp;
		cin >> tmp;
		string answer = "";

		for (int j = tmp.length()-1; j >= 0; j--)
		{
			switch (tmp[j])
			{
				case 'b':
					answer += 'd';
					break;
				case 'd':
					answer += 'b';
					break;
				case 'q':
					answer += 'p';
					break;
				case 'p':
					answer += 'q';
					break;
				default:
					break;
			}
		}
		cout << "#" << i << " " << answer << endl;
	}

	return 0;
}