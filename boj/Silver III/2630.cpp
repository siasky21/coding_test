#include <iostream>

using namespace std;

int paper[128][128];
int white, blue;

void solve(int y, int x, int size)
{
	int check = paper[y][x];

	for (int i = y; i < y + size; i++)
	{
		for (int j = x; j < x + size; j++)
		{
			if (check == 0 && paper[i][j] == 1)
			{
				check = 2;
			}
			else if (check == 1 && paper[i][j] == 0)
			{
				check = 2;
			}
			if (check == 2)
			{
				solve(y, x, size / 2);
				solve(y, x + size/2, size / 2);
				solve(y + size/2, x, size / 2);
				solve(y+size/2, x+size/2, size / 2);
				return;
			}
		}
	}
	if (check == 0)
	{
		white++;
	}
	else
	{
		blue++;
	}
}

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> paper[i][j];
		}
	}

	solve(0, 0, N);

	cout << white << endl;
	cout << blue << endl;
	return 0;
}