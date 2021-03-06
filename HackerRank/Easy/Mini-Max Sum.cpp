#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int n = 5;
	int num;
	long minsum = 0, maxsum = 0;
	vector<int> arr(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		arr[i] = num;
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < 4; i++)
	{
		minsum += arr[i];
	}

	for (int i = 1; i < 5; i++)
	{
		maxsum += arr[i];
	}

	cout << minsum << " " << maxsum << endl;
	return 0;
}