#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<int> tmp;
    
    if (s.length() == 1)
    {
        return 1;
    }
    
    for (int i = 1; i <= s.length()/2; i++)
    {
        int count = 1;
        string f = s.substr(0, i);
        string cmp, cp;
        
        for (int j = i; j < s.length(); j++)
        {
            cmp = s.substr(j, i);
            
            if (!(f.compare(cmp)))
            {
                count++;
            }
        }
    }

    return answer;
}