#include <iostream>

using namespace std;

int tmp[3];

int main()
{
	int t[3][6];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cin >> t[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		tmp[i] = (t[i][3] * 3600 + t[i][4] * 60 + t[i][5]) - (t[i][0] * 3600 + t[i][1] * 60 + t[i][2]);
		cout << tmp[i] / 3600 << ' ';
		tmp[i] %= 3600;
		cout << tmp[i] / 60 << ' ';
		tmp[i] %= 60;
		cout << tmp[i] << endl;
	}
	return 0;
}