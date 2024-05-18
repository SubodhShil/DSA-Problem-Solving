#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjList[N];

int visited[N];
int level[N];

void bfs(int s)
{
    visited[s] = 1;
    level[s] = 0;

    queue<int> qu;
    qu.push(s);

    while (!qu.empty())
    {
        int parent = qu.front();
        for (auto i : adjList[parent])
        {
            if (!visited[i])
            {
                bfs(i);
                level[i] = level[parent] + 1;
            }

            visited[i] = 1;
        }

        qu.pop();
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

    int q;
    cin >> q;
    while (q--)
    {
        int u, v;
        cin >> u >> v;

        for (int i = 0; i < N; ++i)
            visited[i] = level[i] = 0;

        bfs(u);

        if (visited[v])
            cout << level[v] << endl;
        else
            cout << -1;
    }

    return 0;
}
