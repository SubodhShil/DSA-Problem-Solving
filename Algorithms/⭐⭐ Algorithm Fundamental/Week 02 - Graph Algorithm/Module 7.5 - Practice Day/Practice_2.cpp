/*
You will be given an undirected graph as input.
This graph will contain only one connected component.
The edge number will be exactly node-1.
Then take a node from the input and print its level.
Consider root as 1.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];
int visited[N];
int level[N];
int n, m;

void levelPrint(int s)
{
    queue<int> qu;
    qu.push(s);
    visited[s] = 1;
    level[s] = 0;

    while (!qu.empty())
    {
        int u = qu.front();
        qu.pop();

        for (auto i : graph[u])
        {
            if (!visited[i])
            {
                qu.push(i);
                visited[i] = 1;
                level[i] = level[u] + 1;
            }
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

    int l;
    cin >> l;

    levelPrint(1);
    cout << "Level of " << l << " = " << level[l] << endl;

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
Output:
Level of 7 = 1

----------
Testcase 2
----------
Input:
8
7
1 2
2 4
2 5
1 3
3 6
1 7
4 8
8
Output:
Level of 8 = 3

 */