#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int Tnum;
		int answer = 0;
		cin >> Tnum;

		int scores[1000] = { 0, };
		for (int i = 0; i < 1000; i++)
		{
			int n;
			cin >> n;
			scores[n]++;
		}
		
		int count = 0;
		for (int i = 0; i < 1000; i++)
		{
			if (scores[i] >= count)
			{
				answer = i;
				count = scores[i];
			}
		}

		cout << "#" << Tnum << " " << answer << "\n";
	}


	return 0;
}