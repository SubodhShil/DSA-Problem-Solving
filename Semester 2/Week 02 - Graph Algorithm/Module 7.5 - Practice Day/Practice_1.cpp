/*
You will be given an undirected graph.
Print its BFS traversal in reverse order. Consider root as 1.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> graph[N];
vector<bool> visited(N);

int n, m;

void reverseBFS(int s)
{
    queue<int> parent;
    stack<int> reverse;
    parent.push(s);
    visited[s] = 1;

    while (!parent.empty())
    {
        int u = parent.front();
        parent.pop();
        reverse.push(u);

        for (auto i : graph[u])
        {
            if (!visited[i])
            {
                parent.push(i);
                visited[i] = 1;
            }
        }
    }

    while (!reverse.empty())
    {
        cout << reverse.top() << " ";
        reverse.pop();
    }
}

int main()
{
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    reverseBFS(1);

    return 0;
}