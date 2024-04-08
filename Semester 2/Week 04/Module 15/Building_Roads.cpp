#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjList[N];
int level[N];
bool visited[N];

vector<vector<int>> componentNodes;

void dfs(int u)
{
    visited[u] = 1;

    for (int j : adjList[u])
    {
        if (!visited[j])
            dfs(j);
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
        adjList[v].push_back(u);
    }

    int cnt = 0;
    vector<int> cities;

    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            cities.push_back(i);
            dfs(i);
            ++cnt;
        }
    }

    cout << cnt - 1 << endl;
    for (int i = 0; i < cnt - 1; ++i)
        cout << cities[i] << ' ' << cities[i + 1] << endl;

    return 0;
}
