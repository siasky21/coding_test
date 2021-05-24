#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, double> a, pair<int, double> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    map<int, int> clear;
    vector<pair<int, double>> percent;
    int usernum = stages.size();
    
    sort(stages.begin(), stages.end());
    
    for (int i = 0; i < stages.size(); i++)
    {
        clear[stages[i]]++;
    }
    
    for (int i = 1; i <= N; i++)
    {
        if (!usernum || !clear[i])
        {
            percent.push_back({i, 0});
        }
        else
        {
            percent.push_back({i, (double) clear[i] / usernum});
        }
        usernum -= clear[i];
    }
    
    sort(percent.begin(), percent.end(), cmp);
    
    for (auto p : percent)
    {
        answer.push_back(p.first);
    }
    return answer;
}