/**
 * DFS of Graph
 * https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfs(vector<vector<int>> &adj, vector<int> &ans, vector<bool> &visited, int start)
    {

        if (visited[start])
            return;

        if (!visited[start])
        {
            visited[start] = 1;
            ans.push_back(start);

            for (auto x : adj[start])
            {
                dfs(adj, ans, visited, x);
            }
        }
    }

    vector<int> dfs(vector<vector<int>> &adj)
    {
        vector<int> ans;
        int n = adj.size();
        int start = 0;
        vector<bool> visited(n, 0);

        dfs(adj, ans, visited, start);

        return ans;
    }
};
