#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool flag = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            answer += " ";
            flag = true;
        }
        else
        {
            if (flag)
            {
                flag = false;
                answer += toupper(s[i]);
            }
            else
            {
                flag = true;
                answer += tolower(s[i]);
            }
        }
    }
    return answer;
}