#include <bits/stdc++.h>
using namespace std;

#define ll long long
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

typedef pair<int, int> pii;
const int N = 1e5 + 10;
vector<pii> graph[N];
vector<bool> visited(N, false);
ll n, e, cost, cnt = 0;

class comp
{
public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};

void prims()
{
    priority_queue<Edge, vector<Edge>, comp> pq;
    pq.push(Edge(1, 1, 0));

    while (!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();
        ll u = parent.u, v = parent.v, w = parent.w;

        if (visited[v])
            continue;
        visited[v] = 1;

        cost += w;
        ++cnt;

        for (int i = 0; i < graph[v].size(); ++i)
        {
            pii children = graph[v][i];
            pq.push(Edge(v, children.first, children.second));
        }
    }

    if (cnt < n)
        cout << "IMPOSSIBLE\n";
    else
        cout << cost << endl;
}

int main()
{

    cin >> n >> e;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    prims();

    return 0;
}