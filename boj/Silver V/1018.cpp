// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

const int INF = 987654321;
const int MAX = 50;

string board[MAX];

string white[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

string black[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
};

int whiteFirst(int y, int x)
{
	int cnt = 0;

	for (int i = y; i < y + 8; i++)
	{
		for (int j = x; j < x + 8; j++)
		{
			if (board[i][j] != white[i - y][j - x])
			{
				cnt++;
			}
		}
	}
	return cnt;
}

int blackFirst(int y, int x)
{
	int cnt = 0;

	for (int i = y; i < y + 8; i++)
	{
		for (int j = x; j < x + 8; j++)
		{
			if (board[i][j] != black[i - y][j - x])
			{
				cnt++;
			}
		}
	}
	return cnt;
}

int main()
{
	int N, M;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> board[i];
	}

	int result = INF;

	for (int i = 0; i + 7 < N; i++)
	{
		for (int j = 0; j + 7 < M; j++)
		{
			result = min(result, min(whiteFirst(i, j), blackFirst(i, j)));
		}
	}
	cout << result << endl;
	return 0;
}