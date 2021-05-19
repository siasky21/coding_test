#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

vector<char> arr;

int main()
{
	string S;
	cin >> S;

	int sum = 0;

	for (int i = 0; i < S.length(); i++)
	{
		if (isdigit(S[i]))
		{
			sum += S[i] - '0';
		}
		else
		{
			arr.push_back(S[i]);
		}
	}

	sort(arr.begin(), arr.end());

	string answer = "";

	for (int i = 0; i < arr.size(); i++)
	{
		answer += arr[i];
	}
	answer += to_string(sum);

	cout << answer << endl;

	return 0;
}