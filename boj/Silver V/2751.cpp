#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	vector<int> arr;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\n";
	}
	return 0;
}