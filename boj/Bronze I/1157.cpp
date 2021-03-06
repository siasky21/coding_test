#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int max = 0, count = 0, index = 0;
	string words;
	cin >> words;

	int arr[26] = { 0, };

	transform(words.begin(), words.end(), words.begin(), ::toupper);

	for (int i = 0; i < words.length(); i++)
	{
		arr[words[i] - 'A']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == 0)
		{
			continue;
		}
		else if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	
	for (int i = 0; i < 26; i++)
	{
		if (max == arr[i])
		{
			count++;
			if (count >= 2)
			{
				cout << '?' << endl;
				return 0;
			}
		}
	}

	cout << (char)('A' + index) << endl;
	return 0;
}