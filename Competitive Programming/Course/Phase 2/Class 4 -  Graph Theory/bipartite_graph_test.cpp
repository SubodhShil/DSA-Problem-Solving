/*
                            ॐ JAY JAY SRI RAM ॐ

    *
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 1e5 + 7;
vector<int> g[N];
bool vis[N];
int col[N];
bool ok = 1;

void dfs(int u)
{
    if (!ok)
        return;

    vis[u] = 1;
    for (auto v : g[u])
    {
        if (!vis[v])
        {
            col[v] = col[u] ^ 1;
            dfs(v);
        }
        else
        {
            if (col[u] == col[v])
            {
                ok = false;
                return;
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
        g[v].push_back(u);
    }

    // if the graph is disconnected
    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i])
            dfs(i);
    }

    if (ok)
        cout << "Bipartite graph";
    else
        cout << "Not bipartite graph";

    return 0;
}

/*

Input 1:
4 5
1 2
2 3
3 4
4 1
2 4

Output 1:
No

 */