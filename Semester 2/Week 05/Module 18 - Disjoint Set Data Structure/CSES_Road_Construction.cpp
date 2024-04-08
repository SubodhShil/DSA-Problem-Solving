/**
 * @file        CSES_Road_Construction.cpp
 * @author      Subodh Chandra Shil
 * @link:       https://cses.fi/problemset/task/1676/
 */

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 12;
int mx = 0;
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
            mx = max(mx, parentSize[leaderA]);
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
            mx = max(mx, parentSize[leaderB]);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    dsu_set(n);
    int componentCnt = n;
    int maxComponentSize = INT32_MIN;

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        int leaderA = dsu_find(u);
        int leaderB = dsu_find(v);
        if (leaderA != leaderB)
        {
            --componentCnt;
            dsu_union_by_size(u, v);
        }

        cout << componentCnt << " " << mx << endl;
    }

    return 0;
}
