#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> graph[N];
vector<bool> visited(N, 0);
vector<int> level(N, 0);
vector<int> parents(N, -1);

void bfs(int s)
{
    queue<int> qu;
    qu.push(s);
    visited[s] = 1;
    level[s] = 1;
    parents[s] = -1;

    while (!qu.empty())
    {
        int parent = qu.front();
        qu.pop();

        for (auto child : graph[parent])
        {
            if (!visited[child])
            {
                qu.push(child);
                visited[child] = 1;
                level[child] = level[parent] + 1;
                parents[child] = parent;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> path;

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(1);
    if(level[n] == 0)
        cout << "IMp"
    cout << level[n] << endl;

    int current = n;
    while (current != -1)
    {
        path.push_back(current);
        current = parents[current];
    }

    reverse(path.begin(), path.end());
    for (auto i : path)
        cout << i << " ";

    return 0;
}