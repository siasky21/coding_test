#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<int> v;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	vector<int> tmp;

	for (int i = 0; i < 3; i++)
	{
		tmp.push_back(1);
	}

	for (int i = 0; i < v.size() - 3; i++)
	{
		tmp.push_back(0);
	}

	sort(v.begin(), v.end());
	sort(tmp.begin(), tmp.end());

	int result = 0;
	int sum = 0;

	do
	{
		for (int i = 0; i < tmp.size(); i++)
		{
			if (tmp[i] == 1)
			{
				sum += v[i];
			}
		}
		if (sum <= M && M - sum < M - result)
		{
			result = sum;
		}
		sum = 0;
	}
	while (next_permutation(tmp.begin(), tmp.end()));

	cout << result;

	return 0;
}