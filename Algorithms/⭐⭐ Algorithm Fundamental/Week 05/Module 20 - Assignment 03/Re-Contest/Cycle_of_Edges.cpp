#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int parent[N];
int parentSize[N];
int parentLevel[N];

void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
        parentLevel[i] = 0;
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

    int cnt = 0;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        int leaderA = dsu_find(u);
        int leaderB = dsu_find(v);

        if (leaderA == leaderB)
            ++cnt;
        else
            dsu_union_by_rank(u, v);
    }

    cout << cnt << endl;

    return 0;
}