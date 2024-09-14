/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/number-of-islands/
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
    void dfs(int i, int j, int n, int m, vector<vector<char>> &grid)
    {
        if (i >= n or i < 0 or j < 0 or j >= m or grid[i][j] == '0')
            return;

        grid[i][j] = '0';

        vector<pair<int, int>> directions = {{i, j - 1}, {i, j + 1}, {i - 1, j}, {i + 1, j}};
        for (auto x : directions)
            dfs(x.first, x.second, n, m, grid);
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        int totalIslands = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] == '1')
                {
                    ++totalIslands;
                    dfs(i, j, n, m, grid);
                }
            }
        }

        return totalIslands;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;

    return 0;
}