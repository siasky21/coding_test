#include <iostream>

using namespace std;

int main()
{
	int x1, v1, x2, v2;
	cin >> x1 >> v1 >> x2 >> v2;

	int kang1 = x1, kang2 = x2;
	bool check = false;

	for (int i = 0; i < 20000; i++)
	{
		if (kang1 == kang2)
		{
			check = true;
			break;
		}
		kang1 += v1;
		kang2 += v2;
	}

	if (check)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}