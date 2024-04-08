#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjList[N];
vector<int> adjList[N];
int level[N];
bool visited[N];

void dfs(int u, int count_nodes = 0)
{
    visited[u] = 1;
    ++count_nodes;

    for (int v : adjList[u])
    {
        if (!visited[v])
            dfs(v);
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

    int no_of_connected_components = 0;
    vector<int> result;

    for (int i = 0; i <= n; ++i)
    {
        int count_nodes = 0;
        if (!visited[i])
        {
            ++no_of_connected_components;
            dfs(i, count_nodes);
            if (count_nodes > 1)
                result.push_back(count_nodes);
        }
    }

    cout << "Total connected components: " << no_of_connected_components << endl;
    sort(result.begin(), result.end());

    return 0;
}
