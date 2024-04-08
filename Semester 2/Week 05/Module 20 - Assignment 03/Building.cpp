#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 12;
vector<int> visited(N, 0);
int parent[N];
int parentSize[N];
int parentLevel[N];

class Edge
{
public:
    int u;
    int v;
    int w;
    Edge(int u, int v, int w)
    {
        this->u = u, this->v = v, this->w = w;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

void dsu_set(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        parent[i] = -1;
        parentSize[i] = 1;
        parentLevel[i] = 0;
    }
}

int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }

    return node;
}

void dsu_rank_by_level(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if (leaderA != leaderB)
    {
        if (parentLevel[leaderA] > parentLevel[leaderB])
        {
            parent[leaderB] = leaderA;
        }
        else
        {
            parent[leaderA] = leaderB;
            if (parentLevel[leaderA] == parentLevel[leaderB])
                ++parentLevel[leaderB];
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);
    long long cost = 0;
    int componentSize = n;

    vector<Edge> edgeList;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back({u, v, w});
    }

    sort(edgeList.begin(), edgeList.end(), cmp);
    for (auto i : edgeList)
    {
        int u = i.u;
        int v = i.v;
        int w = i.w;
        int leaderA = dsu_find(u);
        int leaderB = dsu_find(v);
        if (leaderA == leaderB)
            continue;

        --componentSize;
        dsu_rank_by_level(u, v);
        visited[u] = visited[v] = 1;
        cost += 1LL * w;
    }

    bool flag = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag && componentSize == 1)
        cout << cost << endl;
    else
        cout << -1 << endl;

    return 0;
}