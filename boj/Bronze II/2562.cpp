#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v(9);

	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}

	cout << *max_element(v.begin(), v.end()) << endl;
	cout << max_element(v.begin(), v.end()) - v.begin()+1 << endl;
	return 0;
}