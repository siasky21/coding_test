#include <iostream>

using namespace std;

int main()
{
	int chess[7] = { 1, 1, 2, 2, 2, 8 };

	for (int i = 0; i < 6; i++)
	{
		int num;
		cin >> num;

		cout << chess[i] - num << " ";
	}
	return 0;
}