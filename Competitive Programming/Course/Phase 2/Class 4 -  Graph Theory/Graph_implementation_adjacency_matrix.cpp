/*
                            ॐ JAY JAY SRI RAM ॐ

    * Graph adjacency matrix implementation
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;
const int N = 200;

int g[N][N];

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    memset(g, 0, sizeof(g));

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u][v] = 1;
        // if undirected then add this line and vice versa
        g[v][u] = 1;
    }

    return 0;
}