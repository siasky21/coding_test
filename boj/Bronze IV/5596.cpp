#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int ming = 0, man = 0, num;

	for (int i = 0; i < 4; i++)
	{
		cin >> num;
		ming += num;
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> num;
		man += num;
	}

	cout << max(ming, man) << endl;
	return 0;
}