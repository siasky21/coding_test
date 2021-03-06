#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int N, P, result = 0, ans = 0;
	vector<int> time;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> P;
		time.push_back(P);
	}

	sort(time.begin(), time.end());

	for (int i = 0; i < time.size(); i++)
	{
		result += time[i];
		ans += result;
	}

	cout << ans << endl;
	return 0;
}