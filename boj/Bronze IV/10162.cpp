#include <iostream>

using namespace std;

int main()
{
	int a, b, c = 0;
	int N;

	cin >> N;

	if (N % 10 != 0)
	{
		cout << -1 << endl;
	}
	else
	{
		a = N / 300;
		b = (N % 300) / 60;
		c = ((N % 300) % 60) / 10;
		cout << a << " " << b << " " << c << endl;
	}

	return 0;
}
