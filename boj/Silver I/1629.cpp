#include <iostream>

using namespace std;

long long int A, B, C;
int result = 0;

long long int pow(long long int x, long long int m)
{
	if (m == 0)
	{
		return 1;
	}
	else if (m == 1)
	{
		return x;
	}
	if (m % 2 > 0)
	{
		return pow(x, m - 1) * x;
	}
	long long int half = pow(x, m / 2);
	half %= C;
	return (half * half) % C;
}

int main()
{
	cin >> A >> B >> C;

	cout << pow(A, B) % C << endl;

	return 0;
}