#include <string>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	while (1)
	{
		string num;
		int sum = 0;
		cin >> num;

		if (num == "#")
		{
			break;
		}
		int tmp = num.length() - 1;
		for (int i = 0; i < num.length(); i++)
		{
			switch (num[i])
			{
				case '-':
					sum += 0 * pow(8, tmp -i);
					break;
				case '\\':
					sum += 1 * pow(8, tmp - i);
					break;
				case '(':
					sum += 2 * pow(8, tmp - i);
					break;
				case '@':
					sum += 3 * pow(8, tmp - i);
					break;
				case '?':
					sum += 4 * pow(8, tmp - i);
					break;
				case '>':
					sum += 5 * pow(8, tmp - i);
					break;
				case '&':
					sum += 6 * pow(8, tmp - i);
					break;
				case '%':
					sum += 7 * pow(8, tmp - i);
					break;
				case '/':
					sum += -1 * pow(8, tmp - i);
					break;
				default:
					break;
			}
		}
		cout << sum << endl;
	}
	return 0;
}