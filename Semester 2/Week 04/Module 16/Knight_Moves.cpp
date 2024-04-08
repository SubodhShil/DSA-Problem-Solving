#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
int level[105][105];
bool visited[105][105];
vector<pii> coordinates = {{-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}, {-1, 2}, {1, 2}};

int n, m;

bool isSafe(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int si, int sj)
{
    if (!isSafe(si, sj) || visited[si][sj])
        return;

    visited[si][sj] = 1;

    for (auto i : coordinates)
    {
        dfs(i.first + si, i.second + sj);
    }
}

void bfs(int si, int sj)
{
    queue<pii> qu;
    qu.push({si, sj});
    level[si][sj] = 0;
    visited[si][sj] = 1;

    while (!qu.empty())
    {
        pii current = qu.front();
        qu.pop();
        int i = current.first;
        int j = current.second;

        for (auto k : coordinates)
        {
            int ni = k.first + i;
            int nj = k.second + j;

            if (isSafe(ni, nj) && !visited[ni][nj])
            {
                qu.push({ni, nj});
                visited[ni][nj] = 1;
                level[ni][nj] = level[i][j] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int ki, kj, qi, qj;
        cin >> n >> m >> ki >> kj >> qi >> qj;

        /// Pattern: if question says to print YES and NO
        /// use DFS only if it says to print YES or NO type answer

        /* dfs(ki, kj);

        if (visited[qi][qj])
            cout << "YES\n";
        else
            cout << "NO\n";

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                visited[i][j] = 0;
            }
        } */

        bfs(ki, kj);

        if (visited[qi][qj])
            cout << level[qi][qj] << endl;
        else
            cout << -1 << endl;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                visited[i][j] = level[i][j] = 0;
            }
        }
    }

    return 0;
}