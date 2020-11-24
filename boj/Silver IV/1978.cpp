#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int count = N;
	int input[100] = { 0, };
	for (int i = 0; i < N; i++)
	{
		cin >> input[i];
		if (input[i] == 1)
		{
			count--;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 2; j <= sqrt(input[i]); j++)
		{
			if (input[i] % j == 0)
			{
				count--;
				break;
			}
		}
	}
	cout << count << endl;
	return 0;
}