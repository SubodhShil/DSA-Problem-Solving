/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/codeforces-24a
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 1e3;
int cost = 0;
bool visited[N];
vector<pair<int, int>> graph[N];

void dfs(int u, int p = 0)
{
    visited[u] = true;

    for (auto x : graph[u])
    {
        int v = x.first, w = x.second;
        if (!visited[v])
        {
            cost += w;
            dfs(v, u);
        }
        else if (v == 1 and p != v)
            cost += w;
    }
}

void ans()
{
    cin >> n;
    int u, v, w;
    int sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        cin >> u >> v >> w;
        graph[u].push_back({v, 0});
        graph[v].push_back({u, w});
        sum += w;
    }

    dfs(1);

    cout << min(cost, sum - cost) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}