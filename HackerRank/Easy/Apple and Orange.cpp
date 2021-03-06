#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int s, t, a, b, m, n;
	cin >> s >> t >> a >> b >> m >> n;

	int acount = 0, ocount = 0;

	vector<int> apples(m);
	vector<int> oranges(n);

	for (int i = 0; i < m; i++)
	{
		cin >> apples[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> oranges[i];
	}

	for (int i = 0; i < m; i++)
	{
		if (a + apples[i] >= s && a + apples[i] <= t)
		{
			acount++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (b + oranges[i] >= s && b + oranges[i] <= t)
		{
			ocount++;
		}
	}

	cout << acount << endl << ocount << endl;
	return 0;
}