#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int num = nums.size() / 2;
    
    sort(nums.begin(), nums.end());
    
    set<int> a(nums.begin(), nums.end());
    return a.size() > num ? num : a.size();
}