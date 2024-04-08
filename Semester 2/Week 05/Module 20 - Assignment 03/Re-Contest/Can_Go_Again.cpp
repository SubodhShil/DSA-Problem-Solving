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

    int source, t;
    cin >> source >> t;

    dist[source] = 0;

    bool cycleFound = false;

    for (ll i = 1; i <= n - 1; ++i)
    {
        for (ll j = 0; j < v.size(); ++j)
        {
            Edge ed = v[j];
            ll u = ed.u, v = ed.v, w = ed.w;
            if (dist[u] != INF)
                dist[v] = min(dist[v], dist[u] + w);
        }
    }

    for (ll i = 0; i < v.size(); ++i)
    {
        Edge ed = v[i];
        ll u = ed.u, v = ed.v, w = ed.w;
        if (dist[u] != INF && dist[v] > dist[u] + w)
        {
            cycleFound = true;
            break;
        }
    }

    if (cycleFound)
        cout << "Negative Cycle Detected\n";
    else
    {
        while (t--)
        {
            ll x;
            cin >> x;
            if (dist[x] == INF)
                cout << "Not Possible\n";
            else
                cout << dist[x] << endl;
        }
    }

    return 0;
}