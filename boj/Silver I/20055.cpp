#include <iostream>

using namespace std;

struct block
{
	bool human;
	int dur;
};

block belt[202];

void init(int n)
{
	for (int i = 0; i < 2 * n; i++)
	{
		belt[i].human = false;
		belt[i].dur = 0;
	}
}

int main()
{
	int N, K;
	int ans = 0;
	cin >> N >> K;
	init(N);

	for (int i = 0; i < 2 * N; i++)
	{
		cin >> belt[i].dur;
	}

	while (1)
	{
		ans++;
		block tmp[202];

		for (int i = 0; i < 2 * N - 1; i++)
		{
			tmp[i + 1] = belt[i];
		}
		tmp[0] = belt[2 * N - 1];

		for (int i = 0; i < 2 * N; i++)
		{
			belt[i] = tmp[i];
		}

		if (belt[N - 1].human == true)
		{
			belt[N - 1].human = false;
		}

		for (int i = N - 2; i >= 0; i--)
		{
			if (belt[i + 1].human == false && belt[i].human == true && belt[i + 1].dur > 0)
			{
				belt[i].human = false;
				belt[i + 1].human = true;
				belt[i + 1].dur--;
			}
		}

		if (belt[N - 1].human == true)
		{
			belt[N - 1].human = false;
		}

		if (belt[0].human == false && belt[0].dur > 0)
		{
			belt[0].human = true;
			belt[0].dur--;
		}

		int cnt = 0;
		for (int i = 0; i < 2 * N; i++)
		{
			if (belt[i].dur == 0)
			{
				cnt++;
			}
		}
		if (cnt >= K)
		{
			break;
		}
	}
	cout << ans << endl;
	return 0;
}