#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pll;
const int N = 1e5 + 5;
const long long int INF = 1e18;
vector<pll> adjList[N];
long long int d[N];
bool visited[N];
int nodes, edges;

void dijkstra(int source)
{
    for (int i = 1; i <= nodes; ++i)
    {
        d[i] = INF;
    }

    d[source] = 0;

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
    }

    int source, t;
    cin >> source >> t;
    dijkstra(source);

    while (t--)
    {
        int n, c;
        cin >> n >> c;

        if (visited[n] && d[n] <= c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
