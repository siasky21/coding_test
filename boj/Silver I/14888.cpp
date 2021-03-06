#include <iostream>

using namespace std;

int N;
int Max = -1000000001;
int Min = 1000000001;
int num[11];
int oper[4];

void solution(int result, int idx)
{
	if (idx == N)
	{
		if (result > Max)
		{
			Max = result;
		}
		if (result < Min)
		{
			Min = result;
		}
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (oper[i] > 0)
		{
			oper[i]--;
			if (i == 0)
			{
				solution(result + num[idx], idx + 1);
			}
			else if (i == 1)
			{
				solution(result - num[idx], idx + 1);
			}
			else if (i == 2)
			{
				solution(result * num[idx], idx + 1);
			}
			else
			{
				solution(result / num[idx], idx + 1);
			}
			oper[i]++;
		}
	}
	return;
}


int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> oper[i];
	}

	solution(num[0], 1);

	cout << Max << endl;
	cout << Min << endl;
	return 0;
}