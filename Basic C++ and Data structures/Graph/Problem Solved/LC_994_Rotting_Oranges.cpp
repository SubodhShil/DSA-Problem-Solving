/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/rotting-oranges/
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
    int orangesRotting(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();

        int minutes = -1;
        int freshOrgCnt = 0;
        queue<pair<int, int>> qu;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] == 2)
                    qu.push({i, j});
                if (grid[i][j] == 1)
                    ++freshOrgCnt;
            }
        }

        if (!freshOrgCnt)
            return 0;

        // Multi source BFS
        while (!qu.empty())
        {
            int curr_size = qu.size();
            for (int j = 0; j < curr_size; ++j)
            {
                auto u = qu.front();
                qu.pop();

                int x = u.first, y = u.second;
                vector<pair<int, int>> coords = {{x - 1, y}, {x + 1, y}, {x, y - 1}, {x, y + 1}};
                for (auto v : coords)
                {
                    int i = v.first, j = v.second;
                    if (i >= 0 and i < n and j >= 0 and j < m and grid[i][j] == 1)
                    {
                        --freshOrgCnt;
                        grid[i][j] = 2;
                        qu.push({i, j});
                    }
                }
            }
            ++minutes;
        }

        return (freshOrgCnt > 0) ? -1 : minutes;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;

    return 0;
}