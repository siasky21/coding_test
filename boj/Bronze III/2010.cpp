#include <iostream>
#define MAX 500000

using namespace std;

int N;
int tap[MAX];

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tap[i];
	}

	int result = tap[0];

	for (int i = 1; i < N; i++)
	{
		result -= 1;
		result += tap[i];
	}

	cout << result << endl;
	return 0;
}