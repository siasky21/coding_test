#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int N, M;
	vector<string> listen;
	vector<string> result;

	cin >> N >> M;

	listen.resize(N);

	for (int i = 0; i < N; i++)
	{
		cin >> listen[i];
	}

	sort(listen.begin(), listen.end());

	string str;
	for (int i = 0; i < M; i++)
	{
		cin >> str;
		
		if (binary_search(listen.begin(), listen.end(), str))
		{
			result.push_back(str);
		}
	}

	sort(result.begin(), result.end());

	cout << result.size() << "\n";
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << "\n";
	}
	return 0;
}