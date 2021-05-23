#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> v;

int main()
{
	int N, answer;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	answer = v[v.size() / 2 - 1];

	cout << answer << endl;

	return 0;
}