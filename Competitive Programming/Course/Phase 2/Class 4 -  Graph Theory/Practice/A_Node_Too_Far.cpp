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
const int inf = 1e9;

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int edges;
    while (cin >> edges and edges)
    {
        map<int, vector<int>> graph;
        set<int> nodes;

        while (edges--)
        {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
            nodes.insert(u);
            nodes.insert(v);
        }

        int q, ttl;
        while (cin >> q >> ttl and !(q == 0 and ttl == 0))
        {
            map<int, int> d;
            for (auto x : nodes)
                d[x] = inf;

            queue<int> qu;
            qu.push(q);
            d[q] = 0;

            while (!qu.empty())
            {
                int u = qu.front();
                qu.pop();

                for (auto v : graph[u])
                {
                    if (d[u] + 1 < d[v])
                    {
                        d[v] = d[u] + 1;
                        qu.push(v);
                    }
                }
            }

            int not_reachable = 0;
            for (auto u : nodes)
            {
                if (d[u] > ttl)
                {
                    not_reachable++;
                }
            }
            ++a;

            cout << "Case " << a << ": " << not_reachable << " nodes not reachable from node " << q << " with TTL = " << ttl << "." << endl;
        }
    }
    return 0;
}