#include <iostream>
#define MAX 1001

using namespace std;

int student[MAX][6];
bool check[MAX][MAX] = { false,  };

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> student[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				if (student[j][i] == student[k][i])
				{
					check[j][k] = check[k][j] = true;
				}
			}
		}
	}

	int answer = -1;
	int prev_cnt = -1;

	for (int i = 0; i < N; i++)
	{
		int count = 0;
		for (int j = 0; j < N; j++)
		{
			if (check[i][j])
			{
				count++;
			}
		}
		if (count > prev_cnt)
		{
			answer = i + 1;
			prev_cnt = count;
		}
	}

	cout << answer << endl;

	return 0;
}