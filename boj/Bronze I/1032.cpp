#include <string>
#include <iostream>
#define MAX 50

using namespace std;

int main()
{
	int N;
	cin >> N;

	string filenames[MAX];

	for (int i = 0; i < N; i++)
	{
		cin >> filenames[i];
	}

	char tmp;
	for (int i = 0; i < filenames[0].length(); i++)
	{
		tmp = filenames[0][i];

		for (int j = 0; j < N; j++)
		{
			if (tmp != filenames[j][i])
			{
				tmp = '?';
				break;
			}
		}
		cout << tmp;
	}

	return 0;
}