#include <string>
#include <iostream>

using namespace std;

int main()
{
	string ten;
	cin >> ten;
	int ans = 0;

	for (int i = 0; i < ten.length(); i++)
	{
		ans *= 16;

		if (ten[i] >= 'A' && ten[i] <= 'F')
		{
			ans += ten[i] - 'A' + 10;
		}
		else
		{
			ans += ten[i] - '0';
		}
	}

	cout << ans << endl;
	return 0;
}