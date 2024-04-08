#include <bits/stdc++.h>
using namespace std;

int parent[100];

int main()
{
    int nodeCnt = 0;
    cout << "Nodes in the graph: ";
    cin >> nodeCnt;

    /// Step 1: initialization every node is parent of itself
    /// Initialize values with it's own index
    for (int i = 1; i <= nodeCnt; ++i)
    {
        parent[i] = i;
    }

    return 0;
}