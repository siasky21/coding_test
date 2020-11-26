#include <string>
#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int H, W, N;
		cin >> H >> W >> N;

		int floor, num;

		floor = N % H;
		num = N / H;

		if (floor > 0)
		{
			num++;
		}
		else
		{
			floor = H;
		}
		
		cout << floor * 100 + num << endl;

	}
	return 0;
}