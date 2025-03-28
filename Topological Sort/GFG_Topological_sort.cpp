/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/topological-sort/1
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
    void dfs(int curr, vector<vector<int>> &adj, vector<bool> &visited, stack<int> &st)
    {
        visited[curr] = 1;

        for (int j = 0; j < adj[curr].size(); ++j)
        {

            int neighbor = adj[curr][j];

            if (!visited[neighbor])
                dfs(neighbor, adj, visited, st);
        }

        st.push(curr);
    }

    vector<int> topologicalSort(vector<vector<int>> &adj)
    {
        int V = adj.size();
        vector<bool> visited(V, 0);
        stack<int> st;

        dfs(0, adj, visited, st);

        for (int i = 0; i < V; ++i)
        {
            if (!visited[i])
                dfs(i, adj, visited, st);
        }

        vector<int> result;
        while (!st.empty())
        {
            result.push_back(st.top());
            st.pop();
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}