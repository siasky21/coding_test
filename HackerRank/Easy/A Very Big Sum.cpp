#include <iostream>

using namespace std;

int main()
{
	int n, num;
	long long result = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		result += num;
	}
	cout << result << endl;
	return 0;
}