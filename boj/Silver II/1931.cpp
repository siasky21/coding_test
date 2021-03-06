#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main()
{
	int N;
	vector<pair<int, int>> v;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}

	sort(v.begin(), v.end(), cmp);

	int savetime = 0, ans = 0;

	for (int i = 0; i < N; i++)
	{
		if (savetime <= v[i].first)
		{
			savetime = v[i].second;
			ans++;
		}
	}

	cout << ans << "\n";
	return 0;
}