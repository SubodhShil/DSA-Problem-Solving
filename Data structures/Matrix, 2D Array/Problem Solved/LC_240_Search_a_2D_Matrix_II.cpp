/**
 * @file        2_LC_240_Search_a_2D_Matrix_II.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-13
 * @resources:  https://leetcode.com/problems/search-a-2d-matrix-ii/description/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size(), col = matrix[0].size();
        int rowIndex = 0, columnIndex = col - 1;

        while (rowIndex < row && columnIndex >= 0)
        {
            int element = matrix[rowIndex][columnIndex];
            if (target == element)
                return 1;
            else if (target > element)
                ++rowIndex;
            else
                --columnIndex;
        }

        return 0;
    }
};

int main()
{

    return 0;
}