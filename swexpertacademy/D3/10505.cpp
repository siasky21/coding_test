// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	
	for (int i = 1; i <= T; i++)
	{
		int n, num, avg, ans = 0, sum = 0;
		int arr[10000];
		cin >> n;
		
		for (int j = 0; j < n; j++)
		{
			cin >> num;
			sum += num;
			arr[j] = num;
		}

		avg = sum / n;

		for (int j = 0; j < n; j++)
		{
			if (arr[j] <= avg)
			{
				ans++;
			}
		}

		cout << "#" << i << " " << ans << "\n";
	}
	return 0;
}