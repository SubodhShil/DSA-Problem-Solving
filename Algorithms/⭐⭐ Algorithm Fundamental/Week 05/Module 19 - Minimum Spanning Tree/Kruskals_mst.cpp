#include <bits/stdc++.h>
using namespace std;

int parent[1000];
int parentSize[1000];
int parentLevel[1000];

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
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
        parentLevel[i] = 0;
    }
}

/// Time Complexity: O(n)
int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }

    return node;
}

/// Time Complexity:
void dsu_union_normal(int u, int v)
{
    int leaderA = dsu_find(u);
    int leaderB = dsu_find(v);

    if (leaderA != leaderB)
    {
        // parent[leaderB] = leaderA;
        /// or vice versa
        parent[leaderA] = leaderB;
    }
}

/*
 Union by size and union by rank or level
 Time complexity: O(α(n))
*/
void dsu_union_by_size(int u, int v)
{
    int leaderA = dsu_find(u);
    int leaderB = dsu_find(v);

    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}

void dsu_union_by_rank(int u, int v)
{
    int leaderA = dsu_find(u);
    int leaderB = dsu_find(v);

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

    vector<Edge> edgeStore, mst;

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        Edge ed(u, v, w);
        edgeStore.push_back(ed);
    }

    sort(edgeStore.begin(), edgeStore.end(), cmp);

    for (Edge val : edgeStore)
    {
        int a = val.u;
        int b = val.v;
        int w = val.w;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if (leaderA == leaderB)
            continue;

        dsu_union_by_rank(a, b);
        mst.push_back(val);
    }

    for (Edge i : mst)
        cout << i.u << " " << i.v << " " << i.w << endl;

    return 0;
}

/*
----------
Testcase 1
----------
Input:
7 11
1 2 5
1 3 7
3 2 9
3 5 8
5 6 5
3 6 7
2 4 6
2 6 15
4 6 8
4 7 11
6 7 9

Output:
1 2 5
5 6 5
2 4 6
1 3 7
3 6 7
6 7 9

 */