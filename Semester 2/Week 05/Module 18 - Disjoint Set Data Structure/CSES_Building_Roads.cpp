/**
 * @file        CSES_Building_Roads.cpp
 * @author      Subodh Chandra Shil
 * @link:       https://cses.fi/problemset/task/1666/
 */

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 12;
int parent[N];
int parentSize[N];

void dsu_set(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}

int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }

    return node;
}

void dsu_union_by_size(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

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

int main()
{
    int n, m;
    cin >> n >> m;
    dsu_set(n);

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        dsu_union_by_size(u, v);
    }

    set<int> leaderStore;
    for (int i = 1; i <= n; ++i)
    {
        int leader = dsu_find(i);
        leaderStore.insert(leader);
    }

    cout << leaderStore.size() - 1 << endl;
    int previousValue = *leaderStore.begin();
    leaderStore.erase(leaderStore.begin());

    for (auto i : leaderStore)
    {
        cout << previousValue << " " << i << endl;
        previousValue = i;
    }

    return 0;
}

/*
----------
Testcase 1
----------
Input:
4 2
1 2
3 4

Output:
1
2 4

 */