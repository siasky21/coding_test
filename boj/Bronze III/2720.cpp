#include <iostream>

using namespace std;

int main()
{
	int Q, D, N, P = 0;
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int C;
		cin >> C;

		for (int i = 0; i < 4; i++)
		{
			Q = C / 25;
			D = (C % 25) / 10;
			N = ((C % 25) % 10) / 5;
			P = (((C % 25) % 10) % 5) / 1;
		}

		cout << Q << " " << D << " " << N << " " << P << endl;
	}
	return 0;
}