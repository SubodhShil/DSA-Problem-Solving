#include <bits/stdc++.h>
using namespace std;

#define INF 1e9 + 10
const int N = 1e3 + 7;
int dist[N][N];
int n, e;

void dist_init()
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i != j)
                dist[i][j] = INF;
        }
    }
}

void print_matrix()
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (dist[i][j] == INF)
                cout << "X ";
            else
                cout << dist[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    cin >> n >> e;
    bool isDirected = 1;

    dist_init();

    for (int i = 1; i <= e; ++i)
    {
        int u, v, w;
        cin >> u >> v >> w;

        dist[u][v] = w;
        if (!isDirected)
            dist[v][u] = w;
    }

    // print_matrix();

    for (int via = 1; via <= n; ++via)
    {
        int k = via;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    print_matrix();

    return 0;
}

/*
Input:
5
7
1 2 2
1 3 6
2 3 1
3 4 4
4 2 6
2 5 3
5 4 9

 */