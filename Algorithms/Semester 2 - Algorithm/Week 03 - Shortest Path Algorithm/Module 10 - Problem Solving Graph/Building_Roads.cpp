/**
 * @file                Building_Roads.cpp
 * @author              Subodh Chandra Shil
 * @link:               https://cses.fi/problemset/task/1666
 */

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjList[N];
vector<bool> visited(N, 0);

void dfs(int s)
{
    visited[s] = 1;
    for (int child : adjList[s])
    {
        if (!visited[child])
            dfs(child);
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

    vector<int> leaders;

    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            leaders.push_back(i);
            dfs(i);
        }
    }

    cout << leaders.size() - 1 << endl;

    for (int i = 1; i < leaders.size(); ++i)
    {
        cout << leaders[i - 1] << ' ' << leaders[i] << endl;
    }

    return 0;
}