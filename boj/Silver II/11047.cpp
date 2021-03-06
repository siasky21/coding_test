#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int N, K, ans = 0;

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	cin >> N >> K;

	vector<int> coin(N);

	for (int i = 0; i < N; i++)
	{
		cin >> coin[i];
	}

	sort(coin.begin(), coin.end(), cmp);

	for (int i = 0; i < N; i++)
	{
		while (K - coin[i] >= 0)
		{
			ans++;
			K -= coin[i];
		}
	}
	cout << ans << endl;
	return 0;
}