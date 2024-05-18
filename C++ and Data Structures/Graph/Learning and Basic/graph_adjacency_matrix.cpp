#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vertices, edges;
    cin >> vertices >> edges;
    int matrix[vertices + 1][vertices + 1]{0};

    for (int i = 0; i < edges; ++i)
    {
        int u, v, weight;
        cin >> u >> v >> weight;
        matrix[u][v] = weight;
    }

    return 0;
}