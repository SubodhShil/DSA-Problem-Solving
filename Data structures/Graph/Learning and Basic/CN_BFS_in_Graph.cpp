/**
 * @file            CN_BFS_in_Graph.cpp
 * @author          Subodh Chandra Shil
 * @link:           https://www.codingninjas.com/studio/problems/bfs-in-graph_973002?leftPanelTab=0
 */

#include <bits/stdc++.h>
using namespace std;

vector<int> bfsTraversal(int n, vector<vector<int>> &adj)
{
    vector<int> visited(n, 0);
    vector<int> result;
    visited[0] = 1;

    queue<int> qu;
    qu.push(0);

    while (!qu.empty())
    {
        int parent = qu.front();
        result.push_back(parent);
        qu.pop();

        for (auto child : adj[parent])
        {
            if (!visited[child])
            {
                qu.push(child);
                visited[child] = 1;
            }
        }
    }

    return result;
}

int main()
{

    return 0;
}