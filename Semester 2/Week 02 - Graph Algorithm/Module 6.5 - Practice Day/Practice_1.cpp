/*
    You will be given an undirected graph. Print its DFS traversal
    in reverse order. Consider root as 1.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];
int visited[N];

void reverseDFS(int s = 1)
{
    visited[s] = 1;

    for (auto i : graph[s])
    {
        if (!visited[i])
            reverseDFS(i);
    }
    cout << s << " ";
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    reverseDFS(1);

    return 0;
}

/*
----------
Testcase 1
----------

Sample Input
4
4
1 2
4 3
3 2
2 4

Sample Output
3 4 2 1
(4 3 2 1 is also a valid answer)

 */