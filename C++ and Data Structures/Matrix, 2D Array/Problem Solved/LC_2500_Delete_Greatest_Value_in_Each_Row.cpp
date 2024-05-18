#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {
        /// follow up: Do I need to change or resize the grid 2D array?
        int result = 0;
        int n = grid.size();
        int m = grid[0].size();

        // sorting the 2D array
        for (auto &row : grid)
        {
            sort(row.begin(), row.end());
        }

        for (int i = 0; i < m; ++i)
        {
            int maxVal = INT32_MIN;
            for (int j = 0; j < n; ++j)
            {
                maxVal = max(maxVal, grid[j][i]);
            }

            result += maxVal;
        }

        return result;
    }
};

int main()
{

    return 0;
}