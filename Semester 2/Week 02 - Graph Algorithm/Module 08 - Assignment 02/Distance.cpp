#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<bool> visited(N, false);
vector<int> adjList[N];
vector<int> level(N);

void bfs(int s)
{
    queue<int> qu;
    qu.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();

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
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int u, v;
        cin >> u >> v;

        for (int i = 0; i < N; ++i)
        {
            visited[i] = false;
            level[i] = 0;
        }

        bfs(u);
        if (visited[v])
            cout << level[v] << endl;

        else
            cout << -1 << endl;
    }

    return 0;
}