// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int N, t;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		t = i;
		bool check = true;

		while (t)
		{
			if (t % 10 && (t % 10) % 3 == 0)
			{
				cout << "-";
				check = false;
			}
			t /= 10;
		}
		if (check)
		{
			cout << i;
		}
		cout << " ";
	}
	return 0;
}