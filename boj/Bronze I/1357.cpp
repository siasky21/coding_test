#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	string X, Y;

	cin >> X >> Y;

	reverse(X.begin(), X.end());
	reverse(Y.begin(), Y.end());

	string ans = to_string(stoi(X) + stoi(Y));
	reverse(ans.begin(), ans.end());

	cout << stoi(ans);
	return 0;
}