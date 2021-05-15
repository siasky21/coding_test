#include <string>
#include <iostream>

using namespace std;

int main()
{
	string S;
	cin >> S;

	long long result = S[0] - '0';

	for (int i = 1; i < S.length(); i++)
	{
		int num = S[i] - '0';
		if (num <= 1 || result <= 1)
		{
			result += num;
		}
		else
		{
			result *= num;
		}
	}

	cout << result << endl;
}