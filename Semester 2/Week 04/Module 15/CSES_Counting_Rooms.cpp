#include <bits/stdc++.h>
using namespace std;

#define pi pair<int, int>

const int N = 1e3 + 10;
int n, m;
int dist[N][N];
bool visited[N][N];
char graph[N][N];

vector<pi> paths = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};

bool isSafe(int ci, int cj)
{
    return (graph[ci][cj] == '.' && ci >= 0 && ci < n && cj >= 0 && cj <= m);
}

void dfs(int si, int sj)
{
    visited[si][sj] = 1;

    int invalidCnt = 0;
    if (graph[si][sj] == '#')
        return;

    for (int i = 0; i < paths.size(); ++i)
    {
        int ci = paths[i].first + si, cj = paths[i].second + sj;

        if (!visited[ci][cj] && isSafe(ci, cj))
            dfs(ci, cj);
    }
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> graph[i][j];

    int roomCnt = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (!visited[i][j] && graph[i][j] == '.')
            {
                ++roomCnt;
                dfs(i, j);
            }
        }
    }

    cout << roomCnt << endl;

    return 0;
}