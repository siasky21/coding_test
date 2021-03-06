#include <iostream>

using namespace std;

int dp[41];

int fibonacci(int n) {
	if (n == 0) {
		dp[0] = 0;
		return 0;
	}
	else if (n == 1) {
		dp[1] = 1;
		return 1;
	}
	if (dp[n] != 0)
	{
		return dp[n];
	}
	else {
		return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int num;
		cin >> num;
		
		if (num == 0)
		{
			cout << "1 0" << "\n";
		}
		else if (num == 1)
		{
			cout << "0 1" << "\n";
		}
		else
		{
			fibonacci(num);
			cout << dp[num - 1] << " " << dp[num] << "\n";
		}
	}
	return 0;
}