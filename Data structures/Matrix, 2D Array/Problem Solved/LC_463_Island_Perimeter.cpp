/**
 * @file        LC_463_Island_Perimeter.cpp
 * @author      Subodh Chandra Shil
 * @resources:  https://leetcode.com/problems/island-perimeter/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                if (grid[i][j] == 1)
                {
                    int currentCellValue = 4;

                    /// check left
                    if (j - 1 >= 0 and grid[i][j - 1])
                        --currentCellValue;

                    /// check right
                    if (j + 1 < col and grid[i][j + 1])
                        --currentCellValue;

                    /// check bottom
                    if (i + 1 < row and grid[i + 1][j])
                        --currentCellValue;

                    /// check above or top
                    if (i - 1 >= 0 and grid[i - 1][j])
                        --currentCellValue;

                    perimeter += currentCellValue;
                }
            }
        }

        return perimeter;
    }
};

int main()
{

    return 0;
}