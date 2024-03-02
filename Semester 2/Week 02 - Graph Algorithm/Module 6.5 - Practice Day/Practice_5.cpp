/*
You will be given an undirected graph as input.
This graph will contain only one connected component. The edge number will be exactly node-1.
Then take a node from the input and print its height.
Consider root as 1.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];
bool visited[N];
int depth[N];
int height[N];
int n, m;

void measureHeight(int u)
{
    visited[u] = 1;

    for (auto i : graph[u])
    {
        if (!visited[i])
        {
            measureHeight(i);
            height[u] = max(height[u], height[i] + 1);
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

    int x;
    cin >> x;
    measureHeight(1);
    cout << "height of " << x << " = " << height[x] << endl;

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
1
Output:
height of 1 = 2

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
7
Output:
height of 7 = 0
 */