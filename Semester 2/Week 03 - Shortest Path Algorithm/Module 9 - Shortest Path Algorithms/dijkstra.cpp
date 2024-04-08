#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const long long int INF = 1e18;
vector<pair<int, int>> adjList[N];
long long int d[N];
bool visited[N];
int nodes, edges;

void dijkstra(int source)
{
    /// set all vertices value as infinity
    for (int i = 1; i <= nodes; ++i)
    {
        d[i] = INF;
    }

    /// distance of source vertex is 0
    d[source] = 0;

    /// priority queue -> min heap implementation
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({d[source], source});

    while (!pq.empty())
    {
        pair<int, int> selected = pq.top();
        pq.pop();
        int selectedNode = selected.second;
        if (visited[selectedNode])
            continue;
        visited[selectedNode] = true;

        for (auto child : adjList[selectedNode])
        {
            /// 1. try relaxing neighbour or child vertices first
            /// 2. push the minimum weight vertex to priority queue
            int weight = child.first;
            int v = child.second;

            if (visited[v])
                continue;

            if (d[selectedNode] + weight < d[v])
            {
                d[v] = d[selectedNode] + weight;
                pq.push({d[v], v});
            }
        }
    }
}

int main()
{
    cin >> nodes >> edges;

    while (edges--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adjList[u].push_back({w, v});
        adjList[v].push_back({w, u});
    }

    int source = 1;
    dijkstra(source);
    for (int i = 1; i <= nodes; ++i)
    {
        cout << d[i] << " ";
    }

    return 0;
}

/*
Input:
    5 6
    1 2 2
    2 5 5
    2 3 4
    1 4 1
    4 3 3
    3 5 1
*/