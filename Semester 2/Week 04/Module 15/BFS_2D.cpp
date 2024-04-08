#include <bits/stdc++.h>
using namespace std;

#define pi pair<int, int>

const int N = 1e3 + 10;
bool visited[N + 1][N + 1];
int dist[N + 1][N + 1];

int n, m;

/// path defines the location of valid children nodes
vector<pi> path = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

/// isSafe funtion refrain the loop from accessing invalid children paths
bool isValid(int ci, int cj)
{
    return (ci >= 0 && ci < n && cj >= 0 && cj < m);
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

    char graph[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> graph[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;

    bfs(si, sj);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

 Input:
 2 4
 ....
 ....
 0 1

 Output:
 1 0 1 2
 2 1 2 3

*/