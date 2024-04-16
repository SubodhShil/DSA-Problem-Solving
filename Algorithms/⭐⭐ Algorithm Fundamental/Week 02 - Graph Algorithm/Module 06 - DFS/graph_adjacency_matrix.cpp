#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool undirected = false;
    vector<vector<int>> adjMat(n, vector<int>(n, 0));

    for (int i = 1; i <= m; ++i)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adjMat[u - 1][v - 1] = wt;

        if (undirected)
            adjMat[v - 1][u - 1] = wt;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << adjMat[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}