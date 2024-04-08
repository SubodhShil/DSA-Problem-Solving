/*
You will be given a directed graph as input. Store this graph in an adjacency list.
Now, convert this adjacency list to an adjacency matrix (index
 starting from 1) and print it. Consider root as 1.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
bool adjMatrix[N][N];
vector<int> adjList[N];
int n, m;

void toAdjMatrix()
{

    for (int i = 1; i <= n; ++i)
    {
        for (auto j : adjList[i])
            adjMatrix[i][j] = 1;
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cout << adjMatrix[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
    }

    toAdjMatrix();

    return 0;
}

/*
----------
Testcase 1
----------

Input:
3
5
1 2
2 3
1 3
3 1
3 2

Ouput:
0 1 1
0 0 1
1 1 0

----------
Testcase 2
----------

Input:
4 
6
1 2 
1 3 
1 4 
3 1 
3 4 
4 1

Ouput:
0 1 1 1 
0 0 0 0
1 0 0 1
1 0 0 0

*/