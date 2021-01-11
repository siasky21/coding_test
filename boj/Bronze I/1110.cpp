#include <iostream>

using namespace std;

int main()
{
	int N, firstNum, secondNum, sum, result = 0, count = 0;

	cin >> N;

	if (N < 10)
	{
		N *= 10;
	}
	
	result = N;

	while (true)
	{
		firstNum = result / 10;
		secondNum = result % 10;
		sum = firstNum + secondNum;
		result = (secondNum * 10) + (sum % 10);
		count++;

		if (result == N)
		{
			break;
		}
	}

	cout << count << endl;

	return 0;
}