#include <iostream>

using namespace std;

int main()
{
	int L, P, human;
	cin >> L >> P;

	human = L * P;

	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;

		cout << num - human << " ";
	}
	return 0;
}