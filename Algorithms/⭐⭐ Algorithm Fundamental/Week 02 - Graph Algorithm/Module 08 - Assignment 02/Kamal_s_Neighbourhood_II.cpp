#include <bits/stdc++.h>
using namespace std;

const int N = 250;
vector<int> adjMatrix[N];
vector<bool> visited(N, 0);
int cnt = -1;

void dfs(int s)
{
    visited[s] = 1;
    ++cnt;

    for (int v : adjMatrix[s])
    {
        if (!visited[v])
            dfs(v);
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
    }

    int target;
    cin >> target;

    dfs(target);

    cout << cnt << endl;

    return 0;
}