/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/number-of-provinces/description/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class Solution
{
public:
    void dfs(int u, vector<int> g[], vector<bool> &visited)
    {
        visited[u] = 1;

        for (auto v : g[u])
        {
            if (!visited[v])
                dfs(v, g, visited);
        }
    }

    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int n = isConnected.size();
        vector<int> g[n];
        vector<bool> visited(n, 0);
        int connected_component = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (isConnected[i][j] == 1 and i != j)
                    g[i].push_back(j);
            }
        }

        for (int i = 0; i < n; ++i)
        {
            if (!visited[i])
            {
                dfs(i, g, visited);
                ++connected_component;
            }
        }

        return connected_component;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;

    return 0;
}