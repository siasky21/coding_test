#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    string num;
    while (num != "0")
    {
        cin >> num;
        string rev = num;
        reverse(num.begin(), num.end());
        if (num != "0")
        {
            if (num == rev)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }
    
    return 0;
}