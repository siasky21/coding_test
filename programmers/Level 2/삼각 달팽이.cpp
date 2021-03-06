#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int arr[1000][1000] = {0, };
    int p = n;
    int x = -1, y = 0, num = 1;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = p; j >= 1; j--)
        {
            if (i % 3 == 0)
            {
                arr[++x][y] = num;
            }
            else if (i % 3 == 1)
            {
                arr[x][++y] = num;
            }
            else if (i % 3 == 2)
            {
                arr[--x][--y] = num;
            }
            num++;
        }
        p--;
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            answer.push_back(arr[i][j]);
        }
    }
    return answer;
}