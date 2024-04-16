#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjList[N];
bool visited[N];

/// the parameter 'u' is the starting node
void dfs(int u)
{
    /// action 1: after entering a node u
    visited[u] = 1;
    cout << "Visiting node: " << u << endl;

    for (int v : adjList[u])
    {
        /// action 2: before entering a new neighbor v
        if (!visited[v])
            /// if not visited then we're entering to the child or neighbor
            dfs(v);
        /// action 3: after exiting a neighbor v
    }
    /// action 4: before exiting a node u
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

    // displayGraph(n);
    dfs(1);

    return 0;
}

/*
    Input 1:
    10
    9
    1 2
    1 3
    1 10
    2 4
    3 5
    3 6
    4 7
    4 8
    6 9

    Input 2:
    9
    10
    1 2
    2 3
    3 8
    1 5
    5 4
    5 6
    4 7
    6 7
    7 8
    8 9
 */