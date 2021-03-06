// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; t++)
	{
		int N, K;
		cin >> N >> K;
		vector<int>arr;
		int ans = 0;

		for (int i = 0; i < N; i++)
		{
			int num;
			cin >> num;
			arr.push_back(num);
		}

		sort(arr.begin(), arr.end(), greater<int>());

		for (int j = 0; j < K; j++)
		{
			ans += arr[j];
		}

		cout << "#" << t << " " << ans << endl;
	}

	return 0;
}