#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<pair<int, int>> paths = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool visited[200][200];

    bool isValid(int si, int sj, int n, int m)
    {
        return (si >= 0 && si < n && sj >= 0 && sj < m);
    }

    void dfs(int si, int sj, int n, int m, vector<vector<int>> &grid, int &cnt)
    {
        visited[si][sj] = 1;
        ++cnt;

        for (int i = 0; i < paths.size(); ++i)
        {
            int ci = si + paths[i].first, cj = sj + paths[i].second;

            if (isValid(ci, cj, n, m) && grid[ci][cj] && !visited[ci][cj])
                dfs(ci, cj, n, m, grid, cnt);
        }
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        int maxArea = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] && !visited[i][j])
                {
                    int cnt = 0;
                    dfs(i, j, n, m, grid, cnt);
                    maxArea = max(maxArea, cnt);
                }
            }
        }

        return maxArea;
    }
};

int main()
{

    return 0;
}