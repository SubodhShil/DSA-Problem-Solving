#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjList[N];
vector<bool> visited(N);
vector<int> level(N);
int parent[N];

/// T.C => O(n + m)
void bfs(int s)
{
    queue<int> qu;
    qu.push(s);
    visited[s] = 1;
    level[s] = 0;
    parent[s] = -1;

    while (!qu.empty())
    {
        int x = qu.front();
        qu.pop();

        for (auto i : adjList[x])
        {
            if (!visited[i])
            {
                qu.push(i);
                level[i] = level[x] + 1;
                parent[i] = x;
            }
            visited[i] = 1;
        }
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
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int source, destination;
    cin >> source >> destination;

    bfs(source);
    cout << "Distance: " << level[destination] << endl;

    /// print the shortest path
    vector<int> path;
    int current = destination;
    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }

    reverse(path.begin(), path.end());
    for (auto i : path)
        cout << i << " ";

    return 0;
}

/*
      Input 01:
        7 7
        1 2
        1 3
        2 5
        3 4
        5 7
        5 6
        4 6
        1 5
 */