#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	for (int T = 1; T <= 10; T++)
	{
		int dmp;
		int ans = 0;
		vector<int> v;
		cin >> dmp;

		for (int i = 0; i < 100; i++)
		{
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}

		for (int i = 0; i < dmp; i++)
		{
			(*max_element(v.begin(), v.end()))--;
			(*min_element(v.begin(), v.end()))++;
		}
		ans = (*max_element(v.begin(), v.end())) - (*min_element(v.begin(), v.end()));
		cout << "#" << T << " " << ans << "\n";
	}
	return 0;
}