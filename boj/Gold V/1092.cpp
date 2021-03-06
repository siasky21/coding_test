#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
	if (a > b)
	{
		return true;
	}
	return false;
}

int main()
{
	int N, M, result = 0;
	int crane[50] = { 0, };
	vector<int> box;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> crane[i];
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int tmp;
		cin >> tmp;
		box.push_back(tmp);
	}

	sort(crane, crane + N, cmp);
	sort(box.begin(), box.end(), cmp);

	if (crane[0] < box[0])
	{
		cout << -1 << endl;
		return 0;	
	}

	while (1)
	{
		result++;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < box.size(); j++)
			{
				if (crane[i] >= box[j])
				{
					box.erase(box.begin() + j);
					break;
				}
			}
		}

		if (box.size() == 0)
		{
			break;
		}
	}

	cout << result << endl;
	return 0;
}