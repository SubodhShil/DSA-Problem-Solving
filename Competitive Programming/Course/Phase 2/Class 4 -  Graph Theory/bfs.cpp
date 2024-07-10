/*
                            ॐ JAY JAY SRI RAM ॐ

    * Breadth First Search (BFS)
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 200;
vector<int> g[N];
bool visited[N];

void bfs()
{
    queue<int> q;
    q.push(1);
    visited[1] = 1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : g[u])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = 1;
            }
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        // if undirected then add this line and vice versa
        g[v].push_back(u);
    }
}