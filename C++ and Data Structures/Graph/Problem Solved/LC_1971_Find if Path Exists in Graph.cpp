/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/find-if-path-exists-in-graph/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

/* BFS solution */
class Solution1
{
public:
    bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
    {
        const int N = n;
        unordered_map<int, vector<int>> graph;

        for (auto edge : edges)
        {
            int u = edge[0], v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        vector<bool> visited(n + 1, 0);
        visited[source] = 1;

        queue<int> qu;
        qu.push(source);

        while (!qu.empty())
        {
            int parent = qu.front();
            if (parent == destination)
                return true;
            qu.pop();

            for (auto child : graph[parent])
            {
                if (!visited[child])
                {
                    qu.push(child);
                    visited[child] = 1;
                }
            }
        }

        return false;
    }
};

/* DFS solution */
class Solution
{
public:
    bool check(unordered_map<int, vector<int>> &graph, vector<bool> &visited, int source, int destination)
    {
        if (source == destination)
        {
            return true;
        }

        visited[source] = 1;

        for (int node : graph[source])
        {
            if (!visited[node] && check(graph, visited, node, destination))
                return true;
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
    {
        unordered_map<int, vector<int>> graph;
        vector<bool> visited(n, 0);

        for (auto edge : edges)
        {
            int u = edge[0], v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        return check(graph, visited, source, destination);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}