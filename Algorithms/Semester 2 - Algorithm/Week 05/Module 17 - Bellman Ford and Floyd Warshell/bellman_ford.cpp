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

    vector<int> dist(n + 1, INT32_MAX);
    dist[1] = 0;

    /// bellman ford should run for |V| - 1 times
    for (int i = 1; i <= n - 1; ++i)
    {
        for (int j = 0; j < v.size(); ++j)
        {
            Edge ed = v[j];
            int u = ed.u, v = ed.v, w = ed.w;
            dist[v] = min(dist[v], dist[u] + w);
        }
    }

    /// display
    for (int i = 1; i <= n; ++i)
    {
        cout << "Node " << i << ": " << dist[i] << endl;
    }

    return 0;
}

/*
----------
Testcase 1
----------
4 4
1 2 5
2 3 2
3 4 -2
1 4 10
 */
