#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	int num;
	cin >> num;

	vector<pair<int, string>> v;

	for (int i = 0; i < num; i++)
	{
		int n;
		string s;
		cin >> n >> s;
		v.push_back(make_pair(n, s));
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << '\n';
	}

	return 0;
}