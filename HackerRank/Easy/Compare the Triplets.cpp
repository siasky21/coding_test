#include <vector>
#include <iostream>

using namespace std;

vector<int> a;
vector<int> b;
vector<int> result = { 0, 0 };

int main()
{
	int num;
	for (int i = 0; i < 3; i++)
	{
		cin >> num;
		a.push_back(num);
	}

	for (int i = 0; i < 3; i++)
	{
		cin >> num;
		b.push_back(num);
	}

	for (int i = 0; i < 3; i++)
	{
		if (a[i] > b[i])
		{
			result[0]++;
		}
		else if (a[i] < b[i])
		{
			result[1]++;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		cout << result[i] << " ";
	}
	return 0;
}