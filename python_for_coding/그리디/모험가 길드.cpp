#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> v;



int main()
{
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end());
	
	int result = 0;
	int count = 0;

	for (int i = 0; i < N; i++)
	{
		count += 1;
		
		if (count >= v[i])
		{
			result += 1;
			count = 0;
		}
	}

	cout << result << endl;

	return 0;
}