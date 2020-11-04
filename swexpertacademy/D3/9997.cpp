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
		int seta;
		cin >> seta;
		int h, m;

		h = (seta / 30);
		m = (seta * 2) % 60;

		cout << "#" << t << " " << h << " " << m << endl;
	}
	return 0;
}