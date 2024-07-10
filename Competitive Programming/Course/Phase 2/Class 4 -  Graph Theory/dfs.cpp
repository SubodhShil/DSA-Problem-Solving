#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 200;
vector<int> g[N];
bool visited[N];

void dfs(int u)
{
    visited[u] = true;

    for (auto v : g[u])
    {
        if (!visited[v]) // caught in infinite loop without this condition
        {
            dfs(v);
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        // if undirected then add this line and vice versa
        g[v].push_back(u);
    }

    dfs(1);

    // checking if the graph is connected or disconnected
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            cout << "Disconnected" << endl;
            return 0;
        }
    }

    cout << "Connected graph\n";

    return 0;
}