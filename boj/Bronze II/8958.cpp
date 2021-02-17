#include <string>
#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		string ox;
		cin >> ox;

		int cnt = 0, answer = 0;

		for (int i = 0; i < ox.length(); i++)
		{
			if (ox[i] == 'O')
			{
				cnt++;
			}
			else
			{
				cnt = 0;
			}
			answer += cnt;
		}
		cout << answer << endl;
	}
	return 0;
}