/*
You will be given an undirected graph as input. This graph will contain only one connected component.
The edge number will be exactly node-1.
Then take a node from the input and print its depth.
Consider root as 1.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> graph[N];
bool visited[N];
int depth[N];
int height[N];
int n, m;

void measureDepth(int u, int destination)
{
    visited[u] = 1;

    if (u == destination)
    {
        cout << "Depth of " << destination << " = " << depth[destination] << endl;

        return;
    }

    for (auto i : graph[u])
    {
        if (!visited[i])
        {
            depth[i] = depth[u] + 1;
            measureDepth(i, destination);
        }
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

    measureDepth(1, 4);

    return 0;
}


/* 
----------
Testcase 1
----------
Input:
7 
6
1 2
2 4
2 5
1 3
3 6
1 7
7
Ouput:
Depth of 7 = 1

----------
Testcase 2
----------
Input:
7 
6
1 2
2 4
2 5
1 3
3 6
1 7
4
Ouput:
Depth of 4 = 2

*/