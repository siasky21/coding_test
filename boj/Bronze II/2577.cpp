#include <string>
#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	int arr[10] = { 0, };
	string result;

	cin >> A >> B >> C;

	result = to_string(A * B * C);

	for (int i = 0; i < result.length(); i++)
	{
		arr[result[i]-'0']++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}