/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/is-graph-bipartite/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

class Solution
{
public:
    static const int n = 100;
    int col[n];
    bool vis[n];
    bool ok = 1;

    void dfs(int u, vector<vector<int>> &graph)
    {
        if (!ok)
            return;

        vis[u] = 1;

        for (auto v : graph[u])
        {
            if (!vis[v])
            {
                col[v] = col[u] ^ 1;
                dfs(v, graph);
            }
            else
            {
                if (col[u] == col[v])
                {
                    ok = 0;
                    return;
                }
            }
        }
    }

    bool isBipartite(vector<vector<int>> &graph)
    {
        fill(begin(vis), end(vis), false);
        for (int i = 0; i < graph.size(); ++i)
        {
            if (!vis[i])
            {
                col[i] = 0;
                dfs(i, graph);
            }
        }

        return ok;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}