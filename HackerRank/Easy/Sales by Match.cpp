#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> ar(n);
	map<int, int> m;
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}

	sort(ar.begin(), ar.end());

	for (int i = 0; i < ar.size(); i++)
	{
		m[ar[i]]++;
	}

	for (auto iter : m)
	{
		count += iter.second / 2;
	}

	cout << count << endl;
	return 0;
}