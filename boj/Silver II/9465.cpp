#include <iostream>
#include <algorithm>

using namespace std;

int st[2][100001];
int dp[2][100001];

int main()
{
	int T, n;
	cin >> T;

	while (T--)
	{
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> st[0][i];
		}

		for (int i = 0; i < n; i++)
		{
			cin >> st[1][i];
		}

		dp[0][0] = st[0][0];
		dp[1][0] = st[1][0];
		dp[0][1] = st[0][1] + dp[1][0];
		dp[1][1] = st[1][1] + dp[0][0];

		for (int i = 2; i < n; i++)
		{
			dp[0][i] = st[0][i] + max(dp[1][i - 1], dp[1][i - 2]);
			dp[1][i] = st[1][i] + max(dp[0][i - 1], dp[0][i - 2]);
		}

		cout << max(dp[0][n - 1], dp[1][n - 1]) << endl;
	}
	return 0;
}