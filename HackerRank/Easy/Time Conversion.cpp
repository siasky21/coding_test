#include <bits/stdc++.h>

using namespace std;

/*
* Complete the timeConversion function below.
*/
string timeConversion(string s) {
	/*
	* Write your code here.
	*/
	int time = stoi(s.substr(0, 2));
	string result;

	if (s[8] == 'A')
	{
		result.append(s, 0, 8);
		if (time == 12)
		{
			result.replace(0, 2, "00");
		}
	}
	else
	{
		result.append(s, 0, 8);
		if (time != 12)
		{
			time += 12;
			result.replace(0, 2, to_string(time));
		}
	}
	return result;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string s;
	getline(cin, s);

	string result = timeConversion(s);

	fout << result << "\n";

	fout.close();

	return 0;
}