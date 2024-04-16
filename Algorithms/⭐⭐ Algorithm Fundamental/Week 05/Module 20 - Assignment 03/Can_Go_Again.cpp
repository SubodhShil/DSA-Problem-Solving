#include <bits/stdc++.h>
using namespace std;

#define ll long long
const long long INF = 1e18 + 10;
class Edge
{
public:
    ll u;
    ll v;
    ll w;
    Edge(ll u, ll v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    ll n, e;
    cin >> n >> e;
    vector<Edge> v;

    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }
    vector<ll> dist(n + 1, INF);

    ll s, t;
    cin >> s >> t;

    dist[s] = 0;
    bool cycleFound = false;

    /// bellman ford
    for (ll i = 1; i <= n - 1; ++i)
    {
        for (ll j = 0; j < v.size(); ++j)
        {
            Edge ed = v[j];
            ll u = ed.u, v = ed.v, w = ed.w;

            if (dist[u] != INF && dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    for (ll i = 0; i < v.size(); ++i)
    {
        Edge ed = v[i];
        ll u = ed.u, v = ed.v, w = ed.w;

        if (dist[u] != INF && dist[u] + w < dist[v])
        {
            cout << "Negative Cycle Detected\n";
            exit(0);
        }
    }

    while (t--)
    {
        ll d;
        cin >> d;

        if (dist[d] == INF)
            cout << "Not Possible\n";
        else
            cout << dist[d] << endl;
    }

    return 0;
}
