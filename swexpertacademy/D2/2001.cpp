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
		int N, M;
		cin >> N >> M;
		int arr[15][15];
		int ans = 0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> arr[i][j];
			}
		}

		for (int i = 0; i <= N - M; i++)
		{
			for (int j = 0; j <= N - M; j++)
			{
				int sum = 0;
				for (int x = j; x < j + M; x++)
				{
					for (int y = i; y < i + M; y++)
					{
						sum += arr[x][y];
					}
				}
				if (sum > ans)
				{
					ans = sum;
				}
			}
		}
		cout << "#" << t << " " << ans << endl;
	}
	return 0;
}