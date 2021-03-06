#include <string>
#include <queue>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    priority_queue<int> pq;
    string tmp = to_string(n);
    string tmp2 = "";
    
    for (int i = 0; i < tmp.length(); i++)
    {
        pq.push(tmp[i]-'0');
    }
    
    while(!pq.empty())
    {
        tmp2 += to_string(pq.top());
        pq.pop();
    }
    answer = stol(tmp2);
    return answer;
}