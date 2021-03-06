#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int N, cnt = 0, tallest;
	cin >> N;

	vector<int> candles(N);

	for (int i = 0; i < N; i++)
	{
		cin >> candles[i];
	}

	sort(candles.begin(), candles.end());

	tallest = candles[N - 1];
	for (int i = N-1; i >= 0; i--)
	{
		if (tallest == candles[i])
		{
			cnt++;
		}
	}

	cout << cnt << endl;
	return 0;
}