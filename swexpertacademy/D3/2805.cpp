#include <iostream>

using namespace std;

int farm[49][49];

int getResult(int size)
{
	int result = 0;

	for (int i = 0; i < size / 2; i++)
	{
		for (int j = size / 2 - i; j <= size / 2 + i; j++)
		{
			result += farm[i][j];
		}
	}

	for (int i = size / 2; i >= 0 ; i--)
	{
		for (int j = size / 2 - i; j <= size / 2 + i; j++)
		{
			result += farm[size - 1 - i][j];
		}
	}

	return result;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; t++)
	{
		int N;
		cin >> N;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				scanf("%1d", &farm[j][i]);
			}
		}
		cout << "#" << t << " " << getResult(N) << "\n";
	}
	return 0;
}