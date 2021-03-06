#include <string>
#include <iostream>

#define M 1234567891
#define r 31

using namespace std;

long long mod(int num, int count)
{
	long long result = num;

	for (int i = 0; i < count; i++)
	{
		result = (result * r) % M;
	}

	return result;
}

int main()
{
	int length;
	string input;

	cin >> length;
	cin >> input;

	long long hash = 0;

	for (int i = 0; i < length; i++)
	{
		hash = (hash + mod(input[i] - 'a' + 1, i)) % M;
	}
	cout << hash << "\n";
	return 0;
}