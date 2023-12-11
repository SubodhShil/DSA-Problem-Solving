#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // are all the values in the matrix only contains 0 and 1?? => NO
    void setZero(vector<vector<int>> &matrix, int targetRow, int targetCol, int row, int col, vector<vector<int>> &secondary)
    {
        // setting value 0 to column
        for (int i = 0; i < col; ++i)
        {
            if (!matrix[targetRow][i])
                continue;
            secondary[targetRow][i] = 0;
        }

        // setting value 0 to row
        for (int i = 0; i < row; ++i)
        {
            if (!matrix[i][targetCol])
                continue;
            secondary[i][targetCol] = 0;
        }
    }

    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> secondary(row, vector<int>(col, 1));

        vector<vector<int>> visited = matrix;
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                if (matrix[i][j] == 0)
                {
                    setZero(matrix, i, j, row, col, secondary);
                }
            }
        }

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                if (!secondary[i][j])
                    matrix[i][j] = 0;
            }
        }
    }
};
int main()
{

    return 0;
}