#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
const int M = 1005;
vector<string> graph;
int n, m;
int visited[N][M];

bool isSafe(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int si, int sj)
{
    if (!isSafe(si, sj) || visited[si][sj] || graph[si][sj] == '-')
        return;

    visited[si][sj] = 1;

    dfs(si, sj - 1);
    dfs(si, sj + 1);
    dfs(si + 1, sj);
    dfs(si - 1, sj);
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

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    dfs(si, sj);

    if (visited[di][dj])
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}