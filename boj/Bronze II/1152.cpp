#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
	string s;
	getline(cin, s);

	int count = 0;

	stringstream ss(s);

	string tmp;
	while (ss >> tmp)
	{
		count++;
	}

	cout << count << endl;
	return 0;
}