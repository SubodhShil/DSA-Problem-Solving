/**
 * @file            LC_54_Spiral_Matrix.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-05-25
 * @resources:      https://youtu.be/1CdolnvxLs0
 *                  https://youtu.be/3Zv-s9UUrFM
 *                  https://leetcode.com/problems/spiral-matrix/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0, total = row * col;
        vector<int> ans;

        /// variables for traversing the 2D matrix
        int firstRow = 0;
        int lastCol = col - 1;
        int lastRow = row - 1;
        int firstCol = 0;

        while (count < total)
        {
            /// print the first row
            /// print all column elements from starting column to last column
            for (int i = firstCol; count < total && i <= lastCol; i++)
            {
                ans.push_back(matrix[firstRow][i]);
                count++;
            }
            firstRow++;

            /// print the last column
            /// print all row elements from starting row to last row
            for (int i = firstRow; count < total && count < total && i <= lastRow; i++)
            {
                ans.push_back(matrix[i][lastCol]);
                count++;
            }
            lastCol--;

            /// print the last row
            for (int i = lastCol; count < total && i >= firstCol; i--)
            {
                ans.push_back(matrix[lastRow][i]);
                count++;
            }
            lastRow--;

            /// print the first column
            for (int i = lastRow; count < total && i >= firstRow; i--)
            {
                ans.push_back(matrix[i][firstCol]);
                count++;
            }
            firstCol++;
        }

        return ans;
    }
};

class Solution2
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int rowCnt = matrix.size();
        int colCnt = matrix[0].size();

        int firstRow = 0;
        int firstCol = 0;
        int lastRow = rowCnt - 1;
        int lastCol = colCnt - 1;

        int total = rowCnt * colCnt;
        int count = 0;
        vector<int> result;

        while (count < total)
        {
            /// first row
            for (int i = firstCol; count < total && i <= lastCol; ++i)
            {
                result.push_back(matrix[firstRow][i]);
                ++count;
            }
            ++firstRow;

            /// last column
            for (int i = firstRow; count < total && i <= lastRow; ++i)
            {
                result.push_back(matrix[i][lastCol]);
                ++count;
            }
            --lastCol;

            /// last row
            for (int i = lastCol; count < total && i >= firstCol; --i)
            {
                result.push_back(matrix[lastRow][i]);
                ++count;
            }
            --lastRow;

            /// first col
            for (int i = lastRow; count < total && i >= firstRow; --i)
            {
                result.push_back(matrix[i][firstCol]);
                ++count;
            }
            ++firstCol;
        }

        return result;
    }
};

int main()
{

    return 0;
}