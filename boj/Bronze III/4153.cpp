#include <cmath>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	vector<long long> a(3);

	while (true)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> a[i];
		}

		sort(a.begin(), a.end());

		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
		{
			break;
		}

		if ((a[0]*a[0]) + (a[1]*a[1]) == (a[2]*a[2]))
		{
			cout << "right" << endl;
		}
		else
		{
			cout << "wrong" << endl;
		}
	}
	return 0;
}