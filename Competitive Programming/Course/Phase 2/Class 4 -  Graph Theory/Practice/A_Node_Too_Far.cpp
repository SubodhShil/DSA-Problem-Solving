/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/uva-336
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 1e5 + 87;
// vector<int> graph[N];
map<int, vector<int>> graph;

void ans()
{
    int edges;
    while (cin >> edges and edges)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int q, ttl;
    while (cin >> q >> ttl and !(q == 0 and ttl == 0))
    {
        
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