/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/cses-1666
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 1e5 + 107;
vector<int> g[N];
bool visited[N];

void dfs(int i)
{
    visited[i] = 1;
    for (auto u : g[i])
        if (!visited[u])
            dfs(u);
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int components = 0;
    vector<int> res;
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            res.push_back(i);
            dfs(i);
            ++components;
        }
    }

    cout << components - 1 << endl;
    for (int i = 0; i < res.size() - 1; ++i)
    {
        cout << res[i] << " " << res[i + 1];
        if (i <= res.size() - 3)
            cout << endl;
    }

    return 0;
}