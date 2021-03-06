#include <vector>
#include <iostream>

using namespace std;

int n;

void plusMinus(vector<int> arr) {
	int pc = 0, mc = 0, zc = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] > 0)
		{
			pc++;
		}
		else if (arr[i] < 0)
		{
			mc++;
		}
		else
		{
			zc++;
		}
	}
	cout << (double)pc / n << "\n";
	cout << (double)mc / n << "\n";
	cout << (double)zc / n << "\n";
}

int main()
{
	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	plusMinus(arr);

	return 0;
}