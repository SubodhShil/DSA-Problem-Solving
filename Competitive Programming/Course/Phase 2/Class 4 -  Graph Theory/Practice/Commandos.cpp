/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/lightoj-1174
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 100;
vector<int> g[N];

vector<int> bfs(int s)
{
    vector<bool> visited(N, 0);
    vector<int> dis(N, 0);
    queue<int> qu;
    qu.push(s);
    visited[s] = true;
    dis[s] = 0;

    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();

        for (auto v : g[u])
        {
            if (!visited[v])
            {
                qu.push(v);
                dis[v] = dis[u] + 1;
                visited[v] = true;
            }
        }
    }

    return dis;
}

void ans(int c)
{
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int s, e;
    cin >> s >> e;

    auto ds = bfs(s);
    auto de = bfs(e);

    int ans = 0;
    for (int u = 0; u < n; ++u)
    {
        ans = max(ans, ds[u] + de[u]);
    }

    cout << "Case " << c << ": " << ans << endl;

    for (int i = 0; i < n; ++i)
    {
        g[i].clear();
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        ans(++c);

    return 0;
}
