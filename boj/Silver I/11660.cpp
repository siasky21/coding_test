#include <iostream>
#define MAX 1025

using namespace std;

int pSum[MAX][MAX];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int num;
			cin >> num;

			pSum[i + 1][j + 1] = pSum[i + 1][j] + pSum[i][j + 1] - pSum[i][j] + num;
		}
	}

	for (int i = 0; i < M; i++)

	{
		int y, x, y2, x2;
		cin >> y >> x >> y2 >> x2;

		cout << pSum[y2][x2] - pSum[y - 1][x2] - pSum[y2][x - 1] + pSum[y - 1][x - 1] << "\n";
	}
	return 0;
}