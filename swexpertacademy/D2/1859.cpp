#include <iostream>

using namespace std;

int num[1000000] = { 0, };

int main()
{
	int T;
	cin >> T;
	int idx = 1;
	while (T--)
	{
		int N;
		cin >> N;
		long ans = 0;

		for (int i = 0; i < N; i++)
		{
			cin >> num[i];
		}

		int tmp = num[N - 1];
		for (int i = N - 2; i >= 0; i--)
		{
			if (tmp > num[i])
			{
				ans += (tmp - num[i]);
			}
			else
			{
				tmp = num[i];
			}
		}
		cout << "#" << idx << " " << ans << "\n";
		idx++;
	}
	return 0;
}