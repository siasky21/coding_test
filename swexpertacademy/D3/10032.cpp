// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; t++)
	{
		int N, K;
		cin >> N >> K;

		if (N % K == 0)
		{
			cout << "#" << t << " " << 0 << endl;
		}
		else
		{
			cout << "#" << t << " " << 1 << endl;
		}
	}
	return 0;
}