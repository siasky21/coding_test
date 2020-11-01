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

	for (int i = 1; i <= TC; i++)
	{
		int N, M;
		cin >> N >> M;

		for (int j = 0; j < N; j++)
		{
			if (M % 2 != 1)
			{
				cout << "#" << i << " OFF" << "\n";
				break;
			}
			else
			{
				cout << "#" << i << " ON" << endl;
				break;
			}

			M /= 2;
		}
	}
	return 0;
}