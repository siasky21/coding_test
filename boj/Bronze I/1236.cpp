#include <algorithm>
#include <iostream>
#define MAX 51

using namespace std;

int N, M;
char map[MAX][MAX];
bool col[MAX];
bool row[MAX];

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 'X')
			{
				col[i] = true;
				row[j] = true;
			}
		}
	}
	int true_x = 0, true_y = 0;

	for (int i = 0; i < N; i++)
	{
		if (col[i])
		{
			true_x++;
		}
	}

	for (int i = 0; i < M; i++)
	{
		if (row[i])
		{
			true_y++;
		}
	}

	cout << max(N - true_x, M - true_y);
	return 0;
}