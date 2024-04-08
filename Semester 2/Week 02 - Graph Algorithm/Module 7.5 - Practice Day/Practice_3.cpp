/*
 You will be given an undirected graph as input.
 Now print “YES” if there is a cycle and print “NO” if there isn’t any cycle. Consider root as 1.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];
int visited[N]{0};
int n, m;

bool isCyclic(int u, int parent = -1)
{
    visited[u] = 1;
    bool cycleExist = false;
    for (auto i : graph[u])
    {
        if (i == parent)
            continue;
        else if (visited[i])
            return true;
        else
            cycleExist = cycleExist || isCyclic(i, u);
    }

    return cycleExist;
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

    bool cycleFound = false;
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i] && isCyclic(i))
        {
            cycleFound = 1;
            break;
        }
        else
            continue;
    }

    if (cycleFound)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

/*
----------
Testcase 1
----------
Input:
4
4
1 2
2 3
3 4
4 2
Output:
YES

Input:
6
4
1 2
2 3
3 4
5 6
Output:
NO

*/