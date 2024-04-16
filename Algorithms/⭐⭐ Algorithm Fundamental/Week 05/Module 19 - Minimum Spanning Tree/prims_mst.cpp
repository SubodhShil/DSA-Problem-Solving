#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
const int N = 1e5 + 5;
vector<pii> graph[N];
vector<bool> visited(N, false);

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
    vector<Edge> edgeList;

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
        edgeList.push_back(parent);

        for (int i = 0; i < graph[v].size(); ++i)
        {
            pii children = graph[v][i];
            if (!visited[children.first])
            {
                pq.push(Edge(v, children.first, children.second));
            }
        }
    }

    edgeList.erase(edgeList.begin());
    for (auto i : edgeList)
    {
        cout << i.u << ' ' << i.v << ' ' << i.w << endl;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
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

/*
----------
Testcase 1
----------

Input:
8 11
1 5 2
1 2 4
1 4 10
5 4 5
2 4 8
2 3 18
3 4 11
4 8 9
4 7 11
7 6 1
8 6 2

Ouput:
1 5 2
1 2 4
5 4 5
4 8 9
8 6 2
6 7 1
4 3 11

----------
Testcase 2
----------

Input:
7 9
1 3 3
3 2 2
2 6 13
1 5 12
1 4 10
4 7 1
5 6 5
3 6 20
4 5 7

Output:
1 3 3
3 2 2
1 4 10
4 7 1
4 5 7
5 6 5

 */