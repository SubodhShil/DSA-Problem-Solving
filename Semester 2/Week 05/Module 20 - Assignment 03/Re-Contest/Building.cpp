#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
const int N = 1e5 + 5;
vector<pii> graph[N];
vector<bool> visited(N, false);

int n, e;

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

class comp
{
public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};

void prims(int s)
{
    priority_queue<Edge, vector<Edge>, comp> pq;
    pq.push(Edge(s, s, 0));
    vector<int> cost;

    while (!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();
        int u = parent.u;
        int v = parent.v;
        int w = parent.w;

        if (visited[v])
            continue;
        visited[v] = true;
        cost.push_back(parent.w);

        for (int i = 0; i < graph[v].size(); ++i)
        {
            pii children = graph[v][i];
            if (!visited[children.first])
            {
                pq.push(Edge(v, children.first, children.second));
            }
        }
    }

    long long total = 0;

    sort(cost.begin(), cost.end());
    for (auto i : cost)
        total += i;

    if (cost.size() != n)
        cout << -1 << endl;
    else
        cout << total << endl;
}

int main()
{
    cin >> n >> e;

    long long cost = 0;

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    prims(1);

    return 0;
}
