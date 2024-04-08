#include <bits/stdc++.h>
using namespace std;

#define pi pair<int, int>

const int N = 1e3 + 10;
bool visited[N + 1][N + 1];
int dist[N + 1][N + 1];
char graph[N][N];

int n, m;

/// path defines the location of valid children nodes
vector<pi> path = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

/// isSafe funtion refrain the loop from accessing invalid children paths
bool isValid(int ci, int cj)
{
    return (ci >= 0 && ci < n && cj >= 0 && cj < m);
}

void dfs(int si, int sj)
{
    if (!isValid(si, sj) || visited[si][sj] || graph[si][sj] == '-')
        return;

    visited[si][sj] = 1;

    dfs(si, sj - 1);
    dfs(si, sj + 1);
    dfs(si - 1, sj);
    dfs(si + 1, sj);
}

/// bfs in 2D grid
void bfs(int si, int sj)
{
    queue<pi> qu;
    qu.push({si, sj});
    dist[si][sj] = 0;
    visited[si][sj] = 1;

    while (!qu.empty())
    {
        pi parent = qu.front();
        qu.pop();

        /// accessing childrens at paths
        for (int i = 0; i < path.size(); ++i)
        {
            pi children = path[i];

            /// children location extracting
            int ci = parent.first + children.first;
            int cj = parent.second + children.second;

            if (isValid(ci, cj) && !visited[ci][cj])
            {
                visited[ci][cj] = 1;
                qu.push({ci, cj});
                dist[ci][cj] = dist[parent.first][parent.second] + 1;
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> graph[i][j];
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    dfs(si, sj);

    if (visited[di][dj])
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
