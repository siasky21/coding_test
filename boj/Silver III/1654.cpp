#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int K, N;
	cin >> K >> N;

	vector<long long> lan(K);
	long long max = 0;

	for (int i = 0; i < K; i++)
	{
		cin >> lan[i];
	}

	sort(lan.begin(), lan.end());

	long long left = 1;
	long long right = lan[K-1];

	while (left <= right)
	{
		long long mid = (left + right) / 2;
		int result = 0;

		for (int i = 0; i < K; i++)
		{
			result += lan[i] / mid;
		}

		if (result >= N)
		{
			left = mid + 1;
			if (mid > max)
			{
				max = mid;
			}
		}
		else
		{
			right = mid - 1;
		}
	}

	cout << max << endl;
	return 0;
}