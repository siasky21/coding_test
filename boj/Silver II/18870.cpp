#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> idx, v;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		idx.push_back(num);
		v.push_back(num);
	}

	sort(idx.begin(), idx.end());
	idx.resize(unique(idx.begin(), idx.end()) - idx.begin());

	for (int a : v)
	{
		int pos = lower_bound(idx.begin(), idx.end(), a) - idx.begin();
		cout << pos << " ";
	}

	return 0;
}