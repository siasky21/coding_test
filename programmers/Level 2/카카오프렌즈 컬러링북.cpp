#include <vector>
#include <queue>

using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
bool visited[100][100];

int BFS(int a, int b, int m, int n, vector<vector<int>> map)
{
    int color = map[a][b];
    int size = 1;
    queue<pair<int, int>> q;
    q.push(make_pair(a, b));
    visited[a][b] = true;
    
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int i = 0; i < m; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < m && ny >= 0 && ny < n)
            {
                if (map[nx][ny] == color && !visited[nx][ny])
                {
                    visited[nx][ny] = true;
                    q.push(make_pair(nx, ny));
                    size++;
                }
            }
        }
    }
    return size;
}

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = false;
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (picture[i][j] != 0 && !visited[i][j])
            {
                int size = BFS(i, j, m, n, picture);
                if (size > max_size_of_one_area)
                {
                    max_size_of_one_area = size;
                }
                number_of_area++;
            }
        }
    }
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}