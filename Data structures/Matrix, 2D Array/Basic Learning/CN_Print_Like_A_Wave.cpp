/**
 * @file        CN_Print_Like_A_Wave.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-05-25
 */

#include <bits/stdc++.h>
using namespace std;
/*
    1. first column: from top to bottom
    2. second column: from bottom to top
 */

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> waveArray;

    for (int col = 0; col < mCols; ++col)
    {
        /// when column is divisible by 2 print top to bottom
        if (col % 2 == 0)
        {
            for (int row = 0; row < nRows; ++row)
            {
                waveArray.push_back(arr[row][col]);
            }
        }

        /// else bottom to top
        else
        {
            for (int row = nRows - 1; row >= 0; --row)
            {
                waveArray.push_back(arr[row][col]);
            }
        }
    }

    return waveArray;
}

int main()
{

    return 0;
}