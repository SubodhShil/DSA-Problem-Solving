#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> adjMatrix[N];
vector<bool> visited(N, 0);

void dfs(int s, int &n)
{
    visited[s] = 1;

    for (int v : adjMatrix[s])
    {
        if (!visited[v])
        {
            dfs(v, ++n);
        }
    }
}

int main()
{
    set<int> elements;
    vector<int> components;
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        cin >> u >> v;
        elements.insert(u);
        elements.insert(v);
        adjMatrix[u].push_back(v);
        adjMatrix[v].push_back(u);
    }

    for (auto i : elements)
    {
        int n = 1;
        if (!visited[i])
        {
            dfs(i, n);
            if (n > 1)
                components.push_back(n);
        }
    }

    sort(begin(components), end(components)); 
    for (auto i : components)
        cout << i << ' ';

    return 0;
}