#include <map>
#include <string>
#include <iostream>

using namespace std;

map<string, int> m1;
string m2[100001];
char order[21];

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	string pok;

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		cin >> pok;
		m1[pok] = i;
		m2[i] = pok;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> order;

		if (isdigit(order[0]))
		{
			cout << m2[atoi(order)] << "\n";
		}
		else
		{
			cout << m1[string(order)] << "\n";
		}
	}
	return 0;
}