#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int ax, ay, az, cx, cy, cz;

	cin >> ax >> ay >> az >> cx >> cy >> cz;

	cout << abs(az - cx) << " " << cy / ay << " " << abs(ax - cz);
}