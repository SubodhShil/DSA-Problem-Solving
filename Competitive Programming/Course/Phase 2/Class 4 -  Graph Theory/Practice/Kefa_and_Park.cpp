/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/codeforces-580c
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 1e5 + 107;
bool cat_present[N];
int consecutive_cats[N];
vector<int> graph[N];
bool visited[N];

int res = 0;

void dfs(int u, int prev)
{
    visited[u] = true;
    if (cat_present[u])
        consecutive_cats[u] = consecutive_cats[prev] + 1;
    else
        consecutive_cats[u] = 0;

    if (consecutive_cats[u] > m)
        return;

    bool is_leaf = true;
    for (auto v : graph[u])
    {
        if (!visited[v])
        {
            dfs(v, u);
            is_leaf = false;
        }
    }

    if (is_leaf)
        ++res;
}

void ans()
{
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
    {
        cin >> cat_present[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(1, 0);

    cout << res << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}