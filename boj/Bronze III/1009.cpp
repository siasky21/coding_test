#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		long a, b;
		cin >> a >> b;

		long result = a;

		b = b % 4 + 4;

		for (long i = 2; i <= b; i++)
		{
			result = (result * a) % 10;
		}

		if (result == 0)
		{
			result = 10;
		}
		cout << result << endl;
	}
	return 0;
}