/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/lightoj-1111
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;
const int N = 10000;
int person[N];
bool visited[N];
int cnt[N];
vector<int> g[N];

void dfs(int u)
{
    visited[u] = 1;
    cnt[u]++;
    for (auto v : g[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

void ans()
{
    cin >> n;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int k, n, m;
        cin >> k >> n >> m;

        for (int i = 1; i <= k; ++i)
        {
            cin >> person[i];
        }

        while (m--)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
        }

        for (int i = 1; i <= k; ++i)
        {
            memset(visited, 0, sizeof(visited));
            dfs(person[i]);
        }

        int ans = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (cnt[i] == k)
            {
                ++ans;
            }
        }

        cout << "Case " << ++c << ": " << ans << endl;

        for (int i = 1; i <= n; ++i)
        {
            g[i].clear();
            visited[i] = cnt[i] = 0;
        }
    }

    return 0;
}