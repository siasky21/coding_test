#include <string>
#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string star = "";
		for (int k = 0; k < i; k++)
		{
			star += " ";
		}
		for (int j = (2 * (N - i)) - 1; j > 0; j--)
		{
			star += "*";
		}
		cout << star << endl;
	}
	return 0;
}