#include <cmath>
#include <iostream>

using namespace std;

int N, r, c;
int result;

void recursion(int x, int y, int len)
{
	if (y == r && x == c)
	{
		cout << result << "\n";
		return;
	}

	if (len == 1)
	{
		result++;
		return;
	}
	if (!(y <= r && x <= c && r < y + len && c < x + len))
	{
		result += len * len;
		return;
	}

	recursion(x, y, len/2);
	recursion(x+len/2, y, len/2);
	recursion(x, y + len/2, len/2);
	recursion(x + len/2 , y+len/2, len/2);
}

int main()
{
	cin >> N >> r >> c;
	recursion(0, 0, pow(2, N));
	return 0;
}