#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> A;

void solution(int n, int key)
{
	int start = 0;
	int end = n - 1;
	int mid;

	while (end - start >= 0)
	{
		mid = (start + end) / 2;

		if (A[mid] == key)
		{
			cout << "1" << "\n";
			return;
		}
		else if (A[mid] > key)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	cout << "0" << "\n";
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int N, M;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		A.push_back(tmp);
	}
	sort(A.begin(), A.end());

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		solution(N, num);
	}


	return 0;
}