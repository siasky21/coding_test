#include <set>
#include <iostream>

using namespace std;

int main()
{	
	int T;
	cin >> T;

	while(T--)
	{
		int k;
		multiset<int> ms;
		cin >> k;

		for (int i = 0; i < k; i++)
		{
			int num;
			char a;

			cin >> a >> num;

			if (a == 'I')
			{
				ms.insert(num);
			}
			else
			{
				if (ms.size() && num == -1)
				{
					ms.erase(ms.begin());
				}
				else if (ms.size() && num == 1)
				{
					auto it = ms.end();
					it--;
					ms.erase(it);
				}
			}
		}
		if (!ms.empty())
		{
			auto end = ms.end();
			end--;
			cout << (*end) << " " << (*ms.begin()) << "\n";
		}
		else
		{
			cout << "EMPTY" << endl;
		}
	}

	return 0;
}