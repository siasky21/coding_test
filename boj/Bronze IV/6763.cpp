#include <string>
#include <iostream>

using namespace std;

void output(int n)
{
	cout << "You are speeding and your fine is $" + to_string(n) + "." << endl;
}

int main()
{
	int limit, car;
	cin >> limit >> car;
	
	if (limit >= car)
	{
		cout << "Congratulations, you are within the speed limit!" << endl;
	}
	else
	{
		if (car - limit >= 1 && car - limit <= 20)
		{
			output(100);
		}
		else if (car - limit >= 21 && car - limit <= 30)
		{
			output(270);
		}
		else
		{
			output(500);
		}
	}

	return 0;
}