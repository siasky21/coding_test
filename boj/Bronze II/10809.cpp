#include <string>
#include <iostream>

using namespace std;

int main()
{
	string S;
	int arr[26] = { 0, };
	cin >> S;

	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}

	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < S.length(); j++)
		{
			if ((char)('a' + i) == S[j] && arr[i] == -1)
			{
				arr[i] = j;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}