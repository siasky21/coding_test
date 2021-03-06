#include <string>
#include <iostream>

using namespace std;

int CountingValleys(int steps, string path)
{
	int count = 0, vallycount = 0;
	bool vally_flag = false;

	for (int i = 0; i < steps; i++)
	{
		if (path[i] == 'U')
		{
			count++;
		}
		else
		{
			count--;
		}

		if (count < 0)
		{
			vally_flag = true;
		}

		if (vally_flag && count >= 0)
		{
			vally_flag = false;
			vallycount++;
		}
	}
	return vallycount;
}

int main()
{
	int steps;
	string path;

	cin >> steps >> path;

	cout << CountingValleys(steps, path) << endl;
	return 0;
}