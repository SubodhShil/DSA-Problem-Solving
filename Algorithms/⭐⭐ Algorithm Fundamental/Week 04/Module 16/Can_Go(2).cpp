#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u;
    int v;
    int w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> v;

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }

    vector<long long> dist(n + 1, 1e18);

    int source, t;
    cin >> source >> t;

    dist[source] = 0;

    /// bellman ford should run for |V| - 1 times
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < v.size(); ++j)
        {
            Edge ed = v[j];
            int u = ed.u, v = ed.v, w = ed.w;
            dist[v] = min(dist[v], dist[u] + w);
        }
    }

    while (t--)
    {
        int destination, cost;
        cin >> destination >> cost;

        if (dist[destination] <= cost)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}