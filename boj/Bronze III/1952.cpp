#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	if (M == N)
	{
		cout << (M * 2) - 2 << endl;
	}
	else
	{
		if (M > N)
		{
			cout << N * 2 - 1 << endl;
		}
		else
		{
			cout << M * 2 - 2 << endl;
		}
	}
	return 0;
}