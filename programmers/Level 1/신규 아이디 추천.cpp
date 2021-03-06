#include <string>
#include <algorithm>

using namespace std;

string solution(string new_id) {
    string answer = new_id;
    
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
    
    for (int i = 0; i < answer.length(); i++)
    {
        if (!('a' <= answer[i] && answer[i] <= 'z') && !('0' <= answer[i] && answer[i] <= '9') && !(answer[i] == '-') && !(answer[i] == '_') && !(answer[i] == '.'))
        {
            answer.erase(i, 1);
            i--;
        }
    }
    
    for (int i = 1; i < answer.length(); i++)
    {
        if (answer[i-1] == '.' && answer[i] == '.')
        {
            answer.erase(i, 1);
            i--;
        }
    }
    
    if (answer[0] == '.')
    {
        answer.erase(0, 1);
    }
    if (answer[answer.length()-1] == '.')
    {
        answer.erase(answer.length()-1, 1);
    }

    if (answer.empty())
    {
        answer += 'a';
    }
    
    if (answer.length() >= 16)
    {
        answer.erase(15, answer.length() - 15);
    }
    
    if (answer.length() <= 2)
    {
        while(true)
        {
            answer += answer[answer.length()-1];
            if (answer.length() == 3)
            {
                break;
            }
        }
    }
    
    if (answer[0] == '.')
    {
        answer.erase(0, 1);
    }
    if (answer[answer.length()-1] == '.')
    {
        answer.erase(answer.length()-1, 1);
    }
    
    return answer;
}