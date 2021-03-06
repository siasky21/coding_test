#include <algorithm>
#include <iostream>

using namespace std;

int triangle[501][501];
int dp[501][501];

int main()
{
	int n;

	cin >> n;

	cin >> triangle[1][1];

	dp[1][1] = triangle[1][1];

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> triangle[i][j];

			dp[i][j] = triangle[i][j] + max(dp[i - 1][j-1], dp[i - 1][j]);
		}
	}

	for (int i = 1; i <= n; i++)
	{
		dp[n][0] = max(dp[n][0], dp[n][i]);
	}

	cout << dp[n][0] << endl;
	return 0;
}