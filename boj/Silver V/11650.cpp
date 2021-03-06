#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.first == b.first)
	{
		if (a.second < b.second)
		{
			return a.second < b.second;
		}
	}
	return a.first < b.first;
}

int main()
{
	int N;
	vector<pair<int, int>> v;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end(), cmp);

	for (auto iter = v.begin(); iter != v.end(); iter++)
	{
		cout << iter->first << " " << iter->second << "\n";
	}

	return 0;
}