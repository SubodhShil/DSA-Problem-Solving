#include <bits/stdc++.h>
using namespace std;

/*
Time complexity: O(|V| * |E|)
 */

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
    bool cycleFound = false;

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

    for (int i = 0; i < v.size(); ++i)
    {
        Edge ed = v[i];
        int u = ed.u, v = ed.v, w = ed.w;
        if (dist[v] > dist[u] + w)
        {
            cycleFound = true;
            break;
        }
    }

    /// display
    if (cycleFound)
    {
        cout << "Graph consist cycle\n";
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            cout << "Node " << i << ": " << dist[i] << endl;
        }
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

----------
Testcase 2
----------
3 3
1 2 2
3 1 3
2 3 5
 */
