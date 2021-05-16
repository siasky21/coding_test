#include <string>
#include <iostream>

using namespace std;

int main()
{
	string S;
	cin >> S;

	int z_count = 0, o_count = 0;

	if (S[0] == '1')
	{
		o_count++;
	}
	else
	{
		z_count++;
	}

	for (int i = 1; i < S.length() - 1; i++)
	{
		if (S[i] != S[i + 1])
		{
			if (S[i + 1] == '1')
			{
				o_count++;
			}
			else
			{
				z_count++;
			}
		}
	}

	cout << min(o_count, z_count) << endl;

	return 0;
}