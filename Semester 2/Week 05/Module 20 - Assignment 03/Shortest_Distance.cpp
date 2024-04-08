#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll INF = 1e18;

int main()
{
    ll n, e;
    cin >> n >> e;
    long long dist[200][200];

    for (ll i = 1; i <= n; ++i)
    {
        for (ll j = 1; j <= n; ++j)
        {
            dist[i][j] = INF;
            if (i == j)
                dist[i][j] = 0;
        }
    }

    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;

        dist[a][b] = min(dist[a][b], w);
    }

    for (ll viaNode = 1; viaNode <= n; ++viaNode)
    {
        for (ll i = 1; i <= n; ++i)
        {
            for (ll j = 1; j <= n; ++j)
            {
                /* if (dist[i][viaNode] == INF || dist[viaNode][j] == INF)
                    continue; */

                if (dist[i][viaNode] + dist[viaNode][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][viaNode] + dist[viaNode][j];
                }
            }
        }
    }

    ll q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (dist[a][b] == INF)
            cout << -1 << endl;
        else
            cout << dist[a][b] << endl;
    }

    return 0;
}
