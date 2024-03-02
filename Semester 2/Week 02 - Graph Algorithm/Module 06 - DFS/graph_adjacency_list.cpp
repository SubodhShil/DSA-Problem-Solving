#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    /// array of vector
    vector<pair<int, int>> adjList[n];
    bool undirected = true;

    for (int i = 1; i <= m; ++i)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adjList[u - 1].push_back({v, wt});
        if (undirected)
            adjList[v - 1].push_back({u, wt});
    }

    for (int i = 0; i < n; ++i)
    {

        if (adjList[i].empty())
            continue;

        cout << "List " << i + 1 << ": ";

        for (auto j : adjList[i])
        {
            cout << "[" << j.first << ", wt: " << j.second << "] ";
        }
        cout << endl;
    }

    return 0;
}