#include <iostream>

using namespace std;

int main()
{
	int rythm[8];
	int asc = 0;
	int dsc = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> rythm[i];

		if (rythm[i] == i + 1)
		{
			asc++;
		}
		else if (rythm[i] == 8 - i)
		{
			dsc++;
		}
	}

	if (asc == 8)
	{
		cout << "ascending" << endl;
	}
	else if (dsc == 8)
	{
		cout << "descending" << endl;
	}
	else
	{
		cout << "mixed" << endl;
	}

	return 0;
}