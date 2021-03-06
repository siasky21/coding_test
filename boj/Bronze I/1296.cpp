#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int oh_love[4] = { 0, };
int w_love[4];
int tmp[50] = { 0, };
string woman[50];

void love_check(string name, int *LOVE)
{
	for (int i = 0; i < name.length(); i++)
	{
		if (name[i] == 'L')
		{
			LOVE[0]++;
		}
		else if (name[i] == 'O')
		{
			LOVE[1]++;
		}
		else if (name[i] == 'V')
		{
			LOVE[2]++;
		}
		else if (name[i] == 'E')
		{
			LOVE[3]++;
		}
	}
}

int main()
{
	int N, check = 0, max_check = -1;
	string oh, w_name, answer;
	cin >> oh;
	cin >> N;

	love_check(oh, oh_love);

	while (N--)
	{
		memset(w_love, 0, sizeof(w_love));
		cin >> w_name;
		love_check(w_name, w_love);

		int L = oh_love[0] + w_love[0];
		int O = oh_love[1] + w_love[1];
		int V = oh_love[2] + w_love[2];
		int E = oh_love[3] + w_love[3];

		check = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;

		if (max_check < check)
		{
			max_check = check;
			answer = w_name;
		}
		else if (max_check == check)
		{
			if (answer > w_name)
			{
				answer = w_name;
			}
		}
	}

	cout << answer << endl;
	return 0;
}