/**
 * @file            1_2d_array_to_1d_array.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-04-29
 * @question:       You'll be given an array which is 2D, you have to convert this array into a 1D format
 */

#include <bits/stdc++.h>
using namespace std;

void convert1D(vector<vector<int>> &array2D, int row, int col, vector<int> &array1D)
{

    int k = 0;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            array1D[k++] = array2D[i][j];
        }
    }

    cout << "1D array is: ";
    for (auto i : array1D)
        cout << i << " ";
}

int main()
{
    cout << "Enter rows and columns: ";
    int row, col;
    cin >> row >> col;

    vector<vector<int>> array2D(row, vector<int>(col));
    vector<int> array1D(row * col);

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cin >> array2D[i][j];
        }
    }

    convert1D(array2D, array2D.size(), array2D[0].size(), array1D);

    return 0;
}