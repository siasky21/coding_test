#include <iostream>

using namespace std;

int main()
{
	int M;
	int cup[3] = { 1, 0, 0 };

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int X, Y, tmp;
		cin >> X >> Y;

		tmp = cup[X-1];
		cup[X-1] = cup[Y-1];
		cup[Y-1] = tmp;
	}

	for (int i = 0; i < 3; i++)
	{
		if (cup[i] == 1)
		{
			cout << i + 1 << endl;
		}
	}
	return 0;
}