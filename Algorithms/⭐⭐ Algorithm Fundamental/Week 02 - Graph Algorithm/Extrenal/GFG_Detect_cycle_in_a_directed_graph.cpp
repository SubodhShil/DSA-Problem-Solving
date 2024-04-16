/**
 * @file        Detect_cycle_in_a_directed_graph.cpp
 * @author      Subodh Chandra Shil
 * @link:       https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
 */

#include <bits/stdc++.h>
using namespace std;

/*
1. DFS call each vertex from 1 till n.
2. While checking with DFS mark true both visited and path-visited at the same time.
3. While return only mark the path-visited as false.
4. If any adjacent node or vertex is visited and path visited at the same time then there is a cycle in the graph. Return true.
*/

class Solution
{
private:
    bool dfs(int vertex, vector<int> adj[], int visited[], int pathVisited[])
    {
        visited[vertex] = 1;
        pathVisited[vertex] = 1;

        for (auto i : adj[vertex])
        {
            if (!visited[i])
            {
                if (dfs(i, adj, visited, pathVisited))
                    return true;
            }
            /// Step 4
            else if (visited[i] && pathVisited[i])
                return true;
        }

        /// Step 3
        pathVisited[vertex] = 0;
        return false;
    }

public:
    bool isCyclic(int V, vector<int> adj[])
    {
        int visited[V]{0};
        int pathVisited[V]{0};

        for (int i = 0; i < V; ++i)
        {
            if (!visited[i])
            {
                if (dfs(i, adj, visited, pathVisited))
                    return true;
            }
        }

        return false;
    }
};

int main()
{

    return 0;
}