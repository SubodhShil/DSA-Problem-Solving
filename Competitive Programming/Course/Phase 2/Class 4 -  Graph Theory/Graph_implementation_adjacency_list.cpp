/*
                            ॐ JAY JAY SRI RAM ॐ

    * Graph adjacency list implementation
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 200;
vector<int> g[N];
int inDeg[N], outDeg[N];

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;

    while (m--)
    {
        int u, v;
        cin >> u >> v;

        /* in-degree and out-degree */
        inDeg[v]++;
        outDeg[u]++;

        g[u].push_back(v);
        // if undirected then add this line and vice versa
        g[v].push_back(u);
    }

    for (auto v : g[2])
        cout << v << " ";

    // count degree of a node
    for (int i = 1; i <= n; ++i)
    {
        cout << g[i].size() << ' ';
    }

    return 0;
}