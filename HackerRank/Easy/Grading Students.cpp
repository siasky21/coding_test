#include <iostream>

using namespace std;

int main()
{
	int n, score;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> score;

		if (score + 2 < 40)
		{
			cout << score << endl;
		}
		else
		{
			if ((score + 2) % 5 == 0)
			{
				cout << score + 2 << endl;
			}
			else if ((score + 2) % 5 == 1)
			{
				cout << score + 1 << endl;
			}
			else
			{
				cout << score << endl;
			}
		}
	}
	return 0;
}