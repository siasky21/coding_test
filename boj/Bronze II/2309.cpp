#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int nan[9], sum = 0;
	bool check = false;

	for (int i = 0; i < 9; i++)
	{
		cin >> nan[i];
		sum += nan[i];
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - (nan[i] + nan[j]) == 100)
			{
				nan[i] = -1;
				nan[j] = -1;
				check = true;
				break;
			}
		}
		if (check)
		{
			break;
		}
	}

	sort(nan, nan + 9);

	for (int i = 2; i < 9; i++)
	{
		cout << nan[i] << endl;
	}
}