#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjList[N];
int level[N];
bool visited[N];

int cnt = 0;
void dfs(int u)
{
    visited[u] = 1;
    ++cnt;

    for (int v : adjList[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
    }

    int k = 0;
    cin >> k;
    dfs(k);

    cout << cnt - 1 << endl;

    return 0;
}
