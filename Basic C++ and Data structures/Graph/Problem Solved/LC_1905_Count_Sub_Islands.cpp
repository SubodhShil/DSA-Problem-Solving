/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/count-sub-islands/
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
    int n, m;

    void dfs(vector<vector<int>> &grid1, vector<vector<int>> &grid2, int i, int j, int &flag)
    {
        if (i < 0 or j < 0 or i >= n or j >= m or grid2[i][j] == 0)
            return;

        if (grid1[i][j] == 0)
            flag = 0;
        grid2[i][j] = 0;
        dfs(grid1, grid2, i + 1, j, flag);
        dfs(grid1, grid2, i - 1, j, flag);
        dfs(grid1, grid2, i, j + 1, flag);
        dfs(grid1, grid2, i, j - 1, flag);
    }

    int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        n = grid1.size(), m = grid1[0].size();
        int subisland_cnt = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid2[i][j])
                {
                    int flag = 1;
                    dfs(grid1, grid2, i, j, flag);
                    subisland_cnt += flag;
                }
            }
        }

        return subisland_cnt;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;

    return 0;
}