#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
const int M = 1005;
vector<string> graph;
int n, m;
bool visited[N][M];

bool isSafe(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int si, int sj, int &visitedCnt)
{
    if (!isSafe(si, sj) || visited[si][sj] || graph[si][sj] == '-')
        return;

    ++visitedCnt;
    visited[si][sj] = 1;

    dfs(si, sj - 1, visitedCnt);
    dfs(si, sj + 1, visitedCnt);
    dfs(si + 1, sj, visitedCnt);
    dfs(si - 1, sj, visitedCnt);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        graph.push_back(s);
    }

    int minCnt = INT32_MAX;
    int visitedCnt = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (!visited[i][j] && graph[i][j] == '.')
            {
                dfs(i, j, visitedCnt);
                minCnt = min(minCnt, visitedCnt);
                visitedCnt = 0;
            }
        }
    }

    if (minCnt == INT32_MAX)
        cout << -1 << endl;
    else
        cout << minCnt << endl;

    return 0;
}