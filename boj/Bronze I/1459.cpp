#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	long long X, Y, W, S;
	cin >> X >> Y >> W >> S;

	long long mod = (X + Y) % 2;
	if (X < Y)
	{
		swap(X, Y);
	}
	cout << min((X + Y) * W, min((X-mod)*S + mod * W, Y*S + (X - Y) * W));
	return 0;
}