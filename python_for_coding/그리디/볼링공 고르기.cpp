#include <iostream>
#include <algorithm>

using namespace std;

int bowl[11];

int main()
{
	int N, M, K;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> K;
		bowl[K]++;
	}

	int count = 0;

	for (int i = 1; i <= M; i++)
	{
		N -= bowl[i];
		count += bowl[i] * N;
	}

	cout << count << endl;
	return 0;
}