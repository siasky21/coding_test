#include <algorithm>
#include <iostream>
#define MAX 50

using namespace std;

int main()
{
	int N;
	int arr[MAX];

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	cout << arr[0] * arr[N-1] << endl;

	return 0;
}