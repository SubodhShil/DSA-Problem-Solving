/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/cses-1667
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int n, k, m, a, b, c;
const int N = 1e5 + 7;
vector<int> graph[N];
int dis[N];
bool vis[N];
unordered_map<int, vector<int>> ump;
int par[N];

void bfs()
{
    queue<int> qu;
    qu.push(1);
    vis[1] = 1;
    dis[1] = 0;

    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();

        for (auto v : graph[u])
        {
            if (!vis[v])
            {
                qu.push(v);
                /* for (auto x : ump[u])
                    ump[v].push_back(x);
                ump[v].push_back(u); */
                par[v] = u;
                dis[v] = dis[u] + 1;
                vis[v] = 1;
            }
        }
    }
}

void ans()
{
    cin >> n >> m;

    for (int i = 1; i <= m; ++i)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs();

    // display
    if (!dis[n])
    {
        cout << "IMPOSSIBLE\n";
        return;
    }

    cout << dis[n] + 1 << endl;
    vector<int> path;
    int u = n;
    while (u != 1)
    {
        path.push_back(u);
        u = par[u];
    }
    path.push_back(1);
    reverse(path.begin(), path.end());
    for (auto i : path)
        cout << i << " ";
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}