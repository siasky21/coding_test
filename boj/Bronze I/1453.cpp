#include <iostream>
#define MAX 101

using namespace std;

int N, cnt = 0;
int map[MAX] = { 0, };

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;

		if (map[tmp] != 0)
		{
			cnt++;
		}
		else
		{
			map[tmp] = 1;
		}
	}

	cout << cnt << endl;
	return 0;
}