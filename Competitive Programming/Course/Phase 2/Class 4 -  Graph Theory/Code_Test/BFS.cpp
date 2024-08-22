#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int N = 200;
vector<int> g[N];
bool visited[N];
int dis[N];

// global variables
int n, m;

void bfs()
{
    queue<int> q;
    q.push(1);
    visited[1] = true;
    dis[1] = 0;

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();

        for (auto i : g[curr])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int32_t main()
{
    cin >> n >> m;

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    return 0;
}