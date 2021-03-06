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
	int N, x, y;
	cin >> N;
	vector<pair<int, int>> v(N);

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		v[i] = make_pair(x, y);
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < N; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}
	return 0;
}