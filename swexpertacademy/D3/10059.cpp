// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int T = 1; T <= t; T++)
	{
		string tmp, a, b;
		cin >> tmp;
		bool MMYY = false;
		bool YYMM = false;

		for (int i = 0; i < 2; i++)
		{
			a += tmp[i];
		}

		for (int i = 2; i < 4; i++)
		{
			b += tmp[i];
		}

		if (a >= "00" && a <= "99" && b >= "01" && b <= "12")
		{
			YYMM = true;
		}
		if (b >= "00" && b <= "99" && a >= "01" && a <= "12")
		{
			MMYY = true;
		}

		if (MMYY == true && YYMM == false)
		{
			cout << "#" << T << " " << "MMYY" << endl;
		}
		else if (YYMM == true && MMYY == false)
		{
			cout << "#" << T << " " << "YYMM" << endl;
		}
		else if (YYMM == true && MMYY == true)
		{
			cout << "#" << T << " " << "AMBIGUOUS" << endl;
		}
		else
		{
			cout << "#" << T << " " << "NA" << endl;
		}

	}
	return 0;
}