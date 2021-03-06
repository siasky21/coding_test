#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> tmp;
    string num = "";
    
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            tmp.push_back(stoi(num));
            num = "";
        }
        else
        {
            num += s[i];
        }
    }
    tmp.push_back(stoi(num));
    
    sort(tmp.begin(), tmp.end());
    int size = tmp.size();
    
    answer += to_string(tmp[0]);
    answer += " ";
    answer += to_string(tmp[size-1]);
    return answer;
}