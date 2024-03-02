#include <bits/stdc++.h>
using namespace std;

#define ll long long
long long INF = 1e18;

int main()
{
    ll n, e;
    cin >> n >> e;
    long long dist[n + 1][n + 1];

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
        /// always pick the minimum distance
        dist[a][b] = min(dist[a][b], w);
    }

    for (ll viaNode = 1; viaNode <= n; ++viaNode)
    {
        for (ll i = 1; i <= n; ++i)
        {
            /// ignore if viaNode is similar as 'i'
            if (i == viaNode)
                continue;

            for (ll j = 1; j <= n; ++j)
            {
                if (dist[i][viaNode] + dist[viaNode][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][viaNode] + dist[viaNode][j];
                }
            }
        }
    }

    /// display
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (dist[i][j] == INF)
                cout << "INF\t";
            else
                cout << dist[i][j] << '\t';
        }
        cout << endl;
    }

    /// Implement problem statements
    /* int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (dist[a][b] == INF)
            cout << -1 << endl;
        else
            cout << dist[a][b] << endl;
    } */

    return 0;
}

/*

----------
Testcase 1
----------
4 6
1 2 3
2 1 2
1 4 5
4 3 2
3 2 1
2 4 4

 */