#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjMatrix[N];
vector<int> adjList[N];
int level[N];
vector<bool> visited(N, 0);

int dfs(int s, list<int> &ll)
{
    visited[s] = 1;
    ll.push_back(s);

    for (int v : adjMatrix[s])
    {
        if (!visited[v])
            dfs(v, ll);
    }
}

void bfs(int s)
{
    queue<int> qu;
    qu.push(s);
    visited[s] = 1;
    level[s] = 1;

    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();

        cout << u << " ";

        for (auto i : adjList[u])
        {
            if (!visited[i])
            {
                qu.push(i);
                level[i] = level[u] + 1;
            }

            visited[i] = true;
        }
    }
}

int main()
{
    int components = 0;
    int n, e;
    cin >> n >> e;

    for (int i = 1; i <= e; ++i)
    {
        int u, v;
        cin >> u >> v;
        adjMatrix[u].push_back(v);
        adjMatrix[v].push_back(u);
    }

    /// checking connnect components
    vector<list<int>> componentList;
    for (int i = 1; i <= n; ++i)
    {
        list<int> ll;
        if (!visited[i])
        {
            dfs(i, ll);
            ++components;
            componentList.push_back(ll);
        }
    }

    cout << "Number of connected components in the graph: " << components << endl
         << endl;

    for (int i = 0; i < componentList.size(); ++i)
    {
        cout << "Component " << i + 1 << ": ";
        for (auto x : componentList[i])
            cout << x << " ";
        cout << endl;
    }

    return 0;
}