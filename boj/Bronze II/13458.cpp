#include <iostream>

using namespace std;

int N, B, C;
long arr[1000001];
long long sum = 0;

int main()
{
	cin >> N;

	for (long i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	cin >> B >> C;

	for (long i = 0; i < N; i++)
	{
		arr[i] -= B;
		if (arr[i] > 0)
		{
			sum += arr[i] / C;
			if (arr[i] % C)
			{
				sum += 1;
			}
		}
	}

	cout << sum + N << endl;

	return 0;
}