#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pll;
const int N = 1e6 + 12;
const long long int INF = 1e18;
vector<pll> graph[N];
long long int d[N];
bool visited[N];
int n, e;

void dijkstra(int source)
{
    for (int i = 1; i <= n; ++i)
        d[i] = INF;

    d[source] = 0;

    priority_queue<pll, vector<pll>, greater<pll>> pq;
    pq.push({d[source], source});

    while (!pq.empty())
    {
        pair<int, int> selected = pq.top();
        pq.pop();
        int selectedNode = selected.second;
        if (visited[selectedNode])
            continue;
        visited[selectedNode] = true;

        for (auto child : graph[selectedNode])
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
    cin >> n >> e;

    while (e--)
    {
        int a, b, cost;
        cin >> a >> b >> cost;
        graph[a].push_back({cost, b});
    }

    int s, t;
    cin >> s >> t;

    dijkstra(s);

    while (t--)
    {
        int destination, dw;
        cin >> destination >> dw;

        if (d[destination] <= dw)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}