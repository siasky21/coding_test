#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	int A[1000];
	int dp[1000];
	int sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N; i++)
	{
		dp[i] = 1;

		for (int j = 0; j < i; j++)
		{
			if (A[i] > A[j])
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		sum = max(sum, dp[i]);
	}

	cout << sum << endl;
	return 0;
}