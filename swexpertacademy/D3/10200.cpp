// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; t++)
	{
		int N, A, B, sum = 0, max_value = 0, min_value = 0;
		cin >> N >> A >> B;

		sum = A + B;

		if (sum <= N)
		{
			max_value = min(A, B);
		}
		else
		{
			min_value = sum - N;
			max_value = min(A, B);
		}

		cout << "#" << t << " " << max_value << " " << min_value << endl;
		
	}
	return 0;
}