/**
 * @file            Counting_Rooms.cpp
 * @author          Subodh Chandra Shil
 * @link:           https://cses.fi/problemset/task/1192
 */

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
vector<string> graph;
bool visited[N][N];
int n, m;

bool isSafe(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int i, int j)
{
    if (!isSafe(i, j))
        return;
    if (visited[i][j])
        return;
    if (graph[i][j] == '#')
        return;

    visited[i][j] = 1;
    dfs(i, j - 1);
    dfs(i, j + 1);
    dfs(i + 1, j);
    dfs(i - 1, j);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        graph.push_back(s);
    }

    int room = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (!visited[i][j] && graph[i][j] == '.')
            {
                dfs(i, j);
                ++room;
            }
        }
    }
    cout << room << endl;

    return 0;
}