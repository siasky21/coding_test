#include <iostream>

using namespace std;

int N, M, T, i, j;
int dp[31][31];

int main()
{
	cin >> T;

	while (T--)
	{
		cin >> N >> M;

		for (i = 1; i <= M; i++)
		{
			dp[1][i] = i;
		}

		for (i = 2; i <= N; i++)
		{
			for (j = 2; j <= M; j++)
			{
				dp[i][j] = dp[i][j - 1] + dp[i - 1][j - 1];
			}
		}

		cout << dp[N][M] << endl;
	}
	return 0;
}