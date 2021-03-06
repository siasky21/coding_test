#include <vector>
#include <string>
#include <iostream>

using namespace std;

string name[20];
char memo[20][20];
vector<pair<int, int>> v;

int main()
{
	int groupnum = 1;

	while (1)
	{
		int n;
		cin >> n;

		if (n == 0)
		{
			break;
		}

		for (int i = 0; i < n; i++)
		{
			cin >> name[i];
			for (int j = 0; j < n - 1; j++)
			{
				cin >> memo[i][j];
			}
		}

		cout << "Group " << groupnum++ << endl;
		v.clear();

		for (int i = 0; i < n; i++)
		{
			int tmp = (i - 1 + n) % n;

			for (int j = 0; j < n; j++)
			{
				if (memo[i][j] == 'N')
				{
					v.push_back(make_pair(i, tmp));
				}
				tmp = (tmp - 1 + n) % n;
			}
		}

		if (v.empty())
		{
			cout << "Nobody was nasty" << endl;
		}
		else
		{
			for (auto e : v)
			{
				cout << name[e.second] << " was nasty about " << name[e.first] << endl;;
			}
		}

		cout << endl;
	}
	return 0;
}