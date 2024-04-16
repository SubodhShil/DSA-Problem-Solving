#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjList[N];
bool visited[N];
int depth[N];
int height[N];

void dfs(int u)
{
    visited[u] = 1;

    for (int v : adjList[u])
    {
        if (!visited[v])
        {
            /// calculating depth of child
            /// Depth of a child = (Parent depth) + 1
            depth[v] = depth[u] + 1;
            dfs(v);
            /// parent's height is calculated after childern's work is done
            if (height[v] + 1 > height[u])
                height[u] = height[v] + 1;
        }
    }
}

void displayGraph(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << "Node " << i << ": ";
        for (int j : adjList[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    bool undirected = true;

    /// taking unweighted undirected graph input
    for (int i = 1; i <= m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);

        if (undirected)
            adjList[v].push_back(u);
    }

    dfs(1);

    /// depth
    /* for (int i = 1; i <= n; ++i)
    {
        cout << "Depth of vertex " << i << " is: " << depth[i] << endl;
    } */

    /// height
    /* for (int i = 1; i <= n; ++i)
    {
        cout << "Height of vertex " << i << " is: " << height[i] << endl;
    } */

    return 0;
}