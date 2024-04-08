#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjList[N];
vector<int> level(N);
vector<bool> visited(N, 0);

void bfs(int s)
{
    queue<int> qu;
    qu.push(s);
    visited[s] = 1;
    level[s] = 0;

    while (!qu.empty())
    {
        int x = qu.front();
        qu.pop();

        for (int i : adjList[x])
        {
            if (!visited[i])
            {
                qu.push(i);
                level[i] = level[x] + 1;
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int l;
    cin >> l;

    vector<int> levelElements;
    bfs(0);
    int flag = 0;
    if (l == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < N; ++i)
    {
        if (level[i] == l)
        {
            cout << i << " ";
            flag = 1;
        }
    }
    if (flag == 0)
        cout << -1 << endl;

    return 0;
}