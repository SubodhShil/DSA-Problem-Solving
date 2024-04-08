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

void fillup()
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            visited[i][j] = 0;
            level[i][j] = -1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    fillup();

    while (t--)
    {
        int ki, kj, qi, qj;
        cin >> n >> m >> ki >> kj >> qi >> qj;

        bfs(ki, kj);
        if (visited[qi][qj])
            cout << level[qi][qj] << endl;
        else
            cout << -1 << endl;
        fillup();
    }

    return 0;
}