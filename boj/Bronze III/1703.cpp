#include <iostream>

using namespace std;

int main()
{
	while (true)
	{
		int a, sum = 1;
		cin >> a;

		if (a == 0)
		{
			break;
		}

		for (int i = 0; i < (2*a); i++)
		{
			int num;
			cin >> num;

			if (i % 2 == 0)
			{
				sum *= num;
			}
			else
			{
				sum -= num;
			}
		}
		cout << sum << endl;
	}
	return 0;
}