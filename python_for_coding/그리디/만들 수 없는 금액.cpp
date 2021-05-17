#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> coin;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int w;
		cin >> w;
		coin.push_back(w);
	}

	sort(coin.begin(), coin.end());

	int target = 1;

	for (int i = 0; i < N; i++)
	{
		if (target < coin[i])
		{
			break;
		}
		target += coin[i];
	}

	cout << target << endl;
	return 0;
}