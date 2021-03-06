#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int mac = 0;
    int day = 0;
    
    while(mac != progresses.size())
    {
        int count = 0;
        day++;
        for(int i = mac; i < progresses.size(); i++)
        {
            if ((progresses[mac] + speeds[mac] * day) >= 100)
            {
                mac++;
                count++;
            }
        }
        if (count != 0) answer.push_back(count);
    }
    return answer;
}