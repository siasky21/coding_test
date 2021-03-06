#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int N, tmp, most_val, avg = 0;
	bool not_first = false;
	cin >> N;

	vector<int> arr;
	int count[8001] = { 0, };
	int most = -9999;
	
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		arr.push_back(tmp);
		avg += tmp;
		count[tmp + 4000]++;
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < 8001; i++)
	{
		if (count[i] == 0)
		{
			continue;
		}
		if (count[i] == most)
		{
			if (not_first)
			{
				most_val = i - 4000;
				not_first = false;
			}
		}
		if (count[i] > most)
		{
			most = count[i];
			most_val = i - 4000;
			not_first = true;
		}
	}
	
	int range = abs(arr[0] - arr[N-1]);

	cout << round((float)avg / N) << "\n" << arr[N/2] << "\n" << most_val << "\n" << range;
	return 0;
}