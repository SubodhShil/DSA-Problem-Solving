#include <bits/stdc++.h>
using namespace std;

int parent[1000];
int parentSize[1000];
int parentLevel[1000];

void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
        parentLevel[i] = 0;
    }
}

/// Time Complexity: O(n)
int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }

    return node;
}

/// Time Complexity:
void dsu_union_normal(int u, int v)
{
    int leaderA = dsu_find(u);
    int leaderB = dsu_find(v);

    if (leaderA != leaderB)
    {
        // parent[leaderB] = leaderA;
        /// or vice versa
        parent[leaderA] = leaderB;
    }
}

/*
 Union by size and union by rank or level
 Time complexity: O(α(n))
*/
void dsu_union_by_size(int u, int v)
{
    int leaderA = dsu_find(u);
    int leaderB = dsu_find(v);

    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}

void dsu_union_by_rank(int u, int v)
{
    int leaderA = dsu_find(u);
    int leaderB = dsu_find(v);

    if (leaderA != leaderB)
    {
        if (parentLevel[leaderA] > parentLevel[leaderB])
        {
            parent[leaderB] = leaderA;
        }
        else
        {
            parent[leaderA] = leaderB;
            if (parentLevel[leaderA] == parentLevel[leaderB])
                ++parentLevel[leaderB];
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);

    while (e--)
    {
        int u, v;
        cin >> u >> v;
        dsu_union_normal(u, v);
        // dsu_union_by_size(u, v);
        // dsu_union_by_rank(u, v);
    }

    cout << dsu_find(1);

    return 0;
}

/*
------------
Testcase 1
------------
7 4
1 2
2 3
4 5
6 5

*/