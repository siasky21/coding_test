#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int M, mod, result;

	M = N / 5;

	while (M >= 0)
	{
		mod = 0;
		result = 0;

		if (M > 0)
		{
			mod = N - 5 * M;
			result = M;
		}
		else
		{
			mod = N;
		}
		result += mod / 3;
		mod = mod % 3;

		if (mod == 0)
		{
			cout << result;
			break;
		}
		M--;
	}
	if (mod != 0)
	{
		cout << -1;
	}
}