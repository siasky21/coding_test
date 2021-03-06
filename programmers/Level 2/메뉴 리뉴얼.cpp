#include <map>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

typedef pair<int, string> pis;
bool chk[11];
string target;
vector<pis> cand[11];
map<string, int> mp;

void comb(int idx, int cnt, string combmenu)
{
    if (idx == target.size())
    {
        return;
    }
    if (cnt == 0)
    {
        sort(combmenu.begin(), combmenu.end());
        mp[combmenu]++;
        return;
    }
    for (int nxt = idx; nxt < target.size(); nxt++)
    {
        if (!chk[nxt])
        {
            chk[nxt] = 1;
            comb(nxt, cnt - 1, combmenu + target[nxt]);
            chk[nxt] = 0;
        }
    }
}

bool cmp(pis i, pis j) {
	if (i.first == j.first)
    {
        return i.second < j.second;
    }
	return i.first > j.first;
}

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    
    for (string menu : orders)
    {
        for (int num : course)
        {
            memset(chk, 0, sizeof(chk));
            target = menu;
            comb(0, num, "");
        }
    }
    
    for (auto i : mp)
    {
        if (i.second < 2)
        {
            continue;
        }
        cand[i.first.size()].emplace_back(i.second, i.first);
    }
    for (int i : course)
    {
        sort(cand[i].begin(), cand[i].end(), cmp);
        int len = cand[i][0].first;
        for (pis j : cand[i])
        {
            if (j.first == len)
            {
                answer.emplace_back(j.second);
            }
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}