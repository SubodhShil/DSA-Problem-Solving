/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/uva-10004
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

#define WHITE 0
#define BLUE 2
#define RED 1

const int N = 1e5 + 7;
vector<int> g[N];
int col[N];

bool is_bicolorable = false;

void dfs(int u, int c)
{
    col[u] = c;
    for (auto v : g[u])
    {
        if (col[v] == WHITE)
            dfs(v, (c == BLUE ? RED : BLUE));
        else
        {
            if (col[u] == col[v])
                is_bicolorable = false;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    while (cin >> n and n)
    {
        int m;
        cin >> m;
        for (int i = 1; i <= m; ++i)
        {
            int u, v;
            cin >> u >> v;
            ++u, ++v;
            g[u].push_back(v);
            g[u].push_back(v);
        }

        for (int i = 1; i <= n; ++i)
        {
            col[i] = WHITE;
        }

        is_bicolorable = true;

        dfs(1, 1);

        if (is_bicolorable)
            cout << "BICOLORABLE.\n";
        else
            cout << "NOT BICOLORABLE.\n";

        for (int i = 1; i <= n; ++i)
        {
            g[i].clear();
        }
        is_bicolorable = false;
    }

    return 0;
}