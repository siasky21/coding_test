#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> arr(n, vector<int>(n));

	int leftsum = 0, rightsum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		leftsum += arr[i][i];
	}

	for (int i = 0; i < n; i++)
	{
		rightsum += arr[i][n-i-1];
	}

	cout << abs(leftsum - rightsum) << endl;
	return 0;
}