#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int N, result;
vector<int> A;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		A.push_back(num);
	}

	sort(A.begin(), A.end());

	do
	{
		int temp = 0;
		for (int i = 0; i < N - 1; i++)
		{
			temp += abs(A[i] - A[i + 1]);
		}

		result = max(result, temp);
	} while (next_permutation(A.begin(), A.end()));

	cout << result << endl;

	return 0;
}