#include <string>
#include <iostream>

using namespace std;

int main()
{
	bool flag = true;

	while (flag)
	{
		string num;
		int sum = 0;

		cin >> num;

		if (num == "0")
		{
			break;
		}
		
		sum += num.length() + 1;
		

		for (int i = 0; i < num.length(); i++)
		{
			if (num[i] == '1')
			{
				sum += 2;
			}
			else if (num[i] == '0')
			{
				sum += 4;
			}
			else
			{
				sum += 3;
			}
		}
		cout << sum << endl;
	}

	return 0;
}