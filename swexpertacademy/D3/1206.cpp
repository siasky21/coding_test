#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int T = 10;
	for (int t = 1; t <= T; t++)
	{
		int N;
		int building[1000];
		int ans = 0;

		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> building[i];
		}

		for (int i = 2; i < N - 2; i++)
		{
			int maxH = max(max(building[i - 2], building[i - 1]), max(building[i + 1], building[i + 2]));

			if (maxH < building[i])
			{
				ans += building[i] - maxH;
			}
		}

		cout << "#" << t << " " << ans << "\n";
	}
	
	return 0;
}