#include <string>
#include <cstring>
#include <iostream>

using namespace std;

bool S[21];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M;

	cin >> M;

	while (M--)
	{
		int x;
		string o;

		cin >> o;

		if (o == "add")
		{
			cin >> x;
			S[x] = 1;
		}
		else if (o == "remove")
		{
			cin >> x;
			S[x] = 0;
		}
		else if (o == "check")
		{
			cin >> x;
			if (S[x] == 1)
			{
				cout << "1" << "\n";
			}
			else
			{
				cout << "0" << "\n";
			}
		}
		else if (o == "toggle")
		{
			cin >> x;
			if (S[x] == 1)
			{
				S[x] = 0;
			}
			else
			{
				S[x] = 1;
			}
		}
		else if (o == "all")
		{
			memset(S, true, sizeof(S));
		}
		else if (o == "empty")
		{
			memset(S, false, sizeof(S));
		}
	}
	return 0;
}