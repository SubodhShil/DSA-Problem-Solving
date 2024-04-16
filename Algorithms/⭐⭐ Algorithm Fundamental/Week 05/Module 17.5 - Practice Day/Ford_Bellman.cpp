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
    vector<Edge> graph;
    vector<int> distance(n + 2, 30000);
    vector<bool> visited(n + 2, false);
    distance[1] = 0;

    while (e--)
    {
        int u, v, w;
        cin >> u >> v, w;

        visited[u] = 1;
        Edge ed(u, v, w);
        graph.push_back(ed);
    }

    for (int i = 1; i <= n - 1; ++i)
    {
        for (int j = 0; j < graph.size(); ++j)
        {
            Edge ed = graph[j];
            int u = ed.u, v = ed.v, w = ed.w;
            distance[v] = min(distance[v], distance[u] + w);
        }
    }

    for (int i = 1; i <= n; ++i)
        cout << distance[i] << ' ';

    return 0;
}