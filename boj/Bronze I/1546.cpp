#include <algorithm>
#include <iostream>
#define MAX 1000

using namespace std;

int main()
{
	int N;
	double max_score, sum = 0;
	cin >> N;

	double arr[MAX];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr+N);

	max_score = arr[N - 1];

	for (int i = 0; i < N; i++)
	{
		sum += (arr[i] / max_score) * 100;
	}

	cout << sum / N << endl;
	return 0;
}