#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjList[N];
bool visited[N];

/// cycle detection is entirely depend upon dfs algorithm
bool isCyclic(int u, int parent = -1)
{
    visited[u] = 1;
    bool cycleExist = false;
    for (int v : adjList[u])
    {
        if (v == parent)
            continue;
        if (visited[v])
            return true;
        else
            cycleExist = cycleExist || isCyclic(v, u);
    }

    return cycleExist;
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

    bool isCycle = false;
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
            isCycle = (isCycle || isCyclic(i));
        if (isCycle)
            break;
    }

    if (isCycle)
        cout << "Cycle detected!!\n";
    else
        cout << "No cycle is detected\n";

    return 0;
}

/*
Input 1:
8
7
1 2
2 3
3 5
2 4
6 7
6 8
7 8

Input 2:
5
4
1 2
2 3
2 4
3 5
*/