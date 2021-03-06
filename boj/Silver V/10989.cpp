#include <iostream>
#define MAX 10000

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int arr[MAX] = { 0, };

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		arr[num - 1]++;
	}

	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			cout << i+1 << "\n";
		}
	}
	return 0;
}