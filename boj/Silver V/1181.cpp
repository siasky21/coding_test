#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(const string &a, const string &b)
{
	if (a.size() == b.size())
	{
		return a < b;
	}
	return a.size() < b.size();
}

int main()
{
	vector<string> v;
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end(), cmp);

	v.erase(unique(v.begin(), v.end()), v.end());

	vector<string>::iterator iter;

	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << endl;
	}


	return 0;
}