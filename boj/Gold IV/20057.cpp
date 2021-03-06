#include <iostream>
#define MAX 501

using namespace std;

int N, ans;
int MAP[MAX][MAX];

int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

// 1 1 7 7 10 10 2 2 5 순서
int xdx[4][10] = { { -1, 1, -1, 1, -1, 1, -2, 2, 0, 0 },{ -1, 1, -1, 1, -1, 1, -2, 2, 0, 0 },
{ 0, 0, 1, 1, 2, 2, 1, 1, 3, 2 },{ 0, 0, -1, -1, -2, -2, -1, -1, -3, -2 } };
int ydy[4][10] = { { 0, 0, 1, 1, 2, 2, 1, 1, 3, 2 },{ 0, 0, -1, -1, -2, -2, -1, -1, -3, -2 },
{ -1, 1, -1, 1, -1, 1, -2, 2, 0, 0 },{ -1, 1, -1, 1, -1, 1, -2, 2, 0, 0 } };

int Percent[9] = { 1, 1, 7, 7, 10, 10, 2, 2, 5 };

int change_dir(int Dir)
{
	if (Dir == 0) return 3;
	if (Dir == 1) return 2;
	if (Dir == 2) return 0;
	if (Dir == 3) return 1;
}

void spread(int x, int y, int Dir)
{
	int xx = x + dx[Dir];
	int yy = y + dy[Dir];

	if (MAP[xx][yy] == 0)
	{
		return;
	}

	int sand = MAP[xx][yy];
	int tmp = sand;

	for (int i = 0; i < 9; i++)
	{
		int nx = x + xdx[Dir][i];
		int ny = y + ydy[Dir][i];
		int per = Percent[i];
		int plus = (tmp * per) / 100;

		if (nx < 1 || ny < 1 || nx > N || ny > N)
		{
			ans += plus;
		}
		else
		{
			MAP[nx][ny] += plus;	
		}

		sand -= plus;
	}

	int nx = x + xdx[Dir][9];
	int ny = y + ydy[Dir][9];

	if (nx < 1 || ny < 1 || nx > N || ny > N)
	{
		ans += sand;
	}
	else
	{
		MAP[nx][ny] += sand;
	}
	MAP[xx][yy] = 0;
}

void Rot()
{
	int x = (N + 1) / 2;
	int y = (N + 1) / 2;
	int Dir = 1;
	int Move_cnt = 1;

	while (true)
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < Move_cnt; j++)
			{
				spread(x, y, Dir);
				x += dx[Dir];
				y += dy[Dir];
			}
			Dir = change_dir(Dir);
		}
		Move_cnt++;
		if (Move_cnt == N)
		{
			for (int j = 0; j < Move_cnt; j++)
			{
				spread(x, y, Dir);
				x += dx[Dir];
				y += dy[Dir];
			}
			break;
		}
	}
	cout << ans << endl;
}

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> MAP[i][j];
		}
	}

	Rot();
	return 0;
}