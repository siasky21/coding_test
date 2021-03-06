#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int N;
	int stair[301];
	int dp[301];

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> stair[i];
	}

	for (int i = 1; i <= 3 && i <= N; i++)
	{
		if (i != 3)
		{
			dp[i] = dp[i - 1] + stair[i];
		}
		else
		{
			dp[i] = max(stair[i] + dp[i - 2], stair[i] + stair[i - 1]);
		}
	}

	for (int i = 4; i <= N; i++)
	{
		dp[i] = max(stair[i] + dp[i - 2], stair[i] + stair[i - 1] + dp[i - 3]);
	}

	cout << dp[N] << "\n";

	return 0;
}