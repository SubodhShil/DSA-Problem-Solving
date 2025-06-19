#include <bits/stdc++.h>
using namespace std;

/*
  Space complexity: O(V)
  Time complexity: O(V + 2E) where V is the number of vertices and E is the number of edges in the graph.
*/

class Solution1
{
  vector<int> bfsTraversal(int n, vector<vector<int>> &adj)
  {
    vector<bool> visited(n, 0);
    queue<int> qu;

    // push starting node to queue and mark as visited
    qu.push(0);
    visited[0] = true;

    vector<int> result;

    while (!qu.empty())
    {
      int parent = qu.front();
      int size = adj[parent].size();
      result.push_back(parent);
      qu.pop();

      // go through all adjacent of current parent node
      for (int i = 0; i < size; ++i)
      {
        int current = adj[parent][i];
        if (!visited[current])
        {
          qu.push(current);
          visited[current] = 1;
        }
      }
    }

    return result;
  }
};


class Solution2
{
  vector<int> bfsTraversal(int n, vector<vector<int>> &adj)
  {
    vector<bool> visited(n, 0);
    queue<int> qu;

    // push starting node to queue and mark as visited
    qu.push(0);
    visited[0] = true;

    vector<int> result;

    while (!qu.empty())
    {
      int parent = qu.front();
      result.push_back(parent);
      qu.pop();

      // go through all adjacent of current parent node
      for (auto x : adj[parent])
      {
        if (!visited[x])
        {
          qu.push(x);
          visited[x] = 1;
        }
      }
    }

    return result;
  }
};

int main() { return 0; }