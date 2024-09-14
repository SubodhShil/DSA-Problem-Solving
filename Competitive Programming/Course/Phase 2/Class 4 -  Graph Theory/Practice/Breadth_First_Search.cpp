/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/aizu-alds1_11_c
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 150;
vector<int> graph[N];
int dis[N], vis[N];

void bfs()
{
    queue<int> qu;
    qu.push(1);
    dis[1] = 0;
    vis[1] = 1;

    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();

        for (auto v : graph[u])
        {
            if (!vis[v])
            {
                qu.push(v);
                vis[v] = 1;
                dis[v] = dis[u] + 1;
            }
        }
    }
}

void ans()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; ++j)
        {
            int v;
            cin >> v;
            graph[u].push_  back(v);
        }
    }

    bfs();

    for (int i = 1; i <= n; ++i)
    {
        cout << i << ' ' << (i > 1 and dis[i] == 0 ? -1 : dis[i]) << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}