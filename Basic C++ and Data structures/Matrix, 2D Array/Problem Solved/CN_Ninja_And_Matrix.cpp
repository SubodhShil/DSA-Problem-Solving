/**
 * @file        CN_Ninja_And_Matrix.cpp
 * @author      Subodh Chandra Shil
 */

#include <bits/stdc++.h>
using namespace std;

vector<int> printMatrix(vector<vector<int>> &mat, int n)
{
    int row = mat.size();
    int col = mat[0].size();
    vector<int> result;

    for (int i = 0; i < row; ++i)
    {
        int j = 0;
        int k = col - 1;
        while (j < col)
        {
            if (i & 1)
                result.push_back(mat[i][k]);
            else
                result.push_back(mat[i][j]);

            ++j, --k;
        }
    }

    return result;
}

int main()
{

    return 0;
}