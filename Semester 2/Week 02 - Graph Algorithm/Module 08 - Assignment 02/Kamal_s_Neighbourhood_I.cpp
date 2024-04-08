#include <bits/stdc++.h>
using namespace std;

const int N = 25;
vector<int> adjMatrix[N];
int level[N];
vector<bool> visited(N, 0);
int connection = 0;

void dfs(int s, int target)
{
    visited[s] = 1;
    if (s == target)
    {
        connection += adjMatrix[target].size();
        return;
    }

    for (int v : adjMatrix[s])
    {
        if (!visited[v])
            dfs(v, target);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adjMatrix[u].push_back(v);
        adjMatrix[v].push_back(u);
    }

    int target;
    cin >> target;

    dfs(target, target);
    cout << connection << endl;

    return 0;
}