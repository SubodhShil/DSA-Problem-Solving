#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
bool visited[N];
vector<int> adjList[N];
int level[N];

void bfs(int s)
{
    queue<int> qu;
    qu.push(s);
    visited[s] = 1;
    level[s] = 1;

    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();

        cout << "Visiting node: " << u << " Level: " << level[u] << endl;

        for (auto i : adjList[u])
        {
            if (!visited[i])
            {
                qu.push(i);
                level[i] = level[u] + 1;
            }

            visited[i] = true;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bfs(1);

    return 0;
}

/*
Input 1:
12
11
1 2
1 3
1 10
2 4
2 5
3 9
10 11
10 12
5 6
5 7
7 8
 */