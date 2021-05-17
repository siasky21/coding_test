#include <string>
#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	string num = to_string(N);

	int left = 0, right = 0;


	for (int i = 0; i < num.length(); i++)
	{
		if (i < num.length() / 2)
		{
			left += num[i] - '0';
		}
		else
		{
			right += num[i] - '0';
		}
	}

	if (left == right)
	{
		cout << "LUCKY" << endl;
	}
	else
	{
		cout << "READY" << endl;
	}

	return 0;
}