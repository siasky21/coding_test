#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int ans = 0, i = 1;

	while (i <= N)
	{
		ans += (N - i + 1);
		i *= 10;
	}

	cout << ans << endl;

	return 0;
}