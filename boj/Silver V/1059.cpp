#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int L, n;
	vector<int> S;

	cin >> L;

	for (int i = 0; i < L; i++)
	{
		int num;
		cin >> num;
		S.push_back(num);
	}

	sort(S.begin(), S.end());

	cin >> n;

	int least = 1, large;

	for (int i = 0; i < L; i++)
	{
		if (n <= S[i])
		{
			large = S[i];
			break;
		}
		least = S[i] + 1;
	}

	int cnt = 0;
	for (int i = least; i < large; i++)
	{
		for (int j = i + 1; j < large; j++)
		{
			if (i <= n && n <= j)
			{
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}