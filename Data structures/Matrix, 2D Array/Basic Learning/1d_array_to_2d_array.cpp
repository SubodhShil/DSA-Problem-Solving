/**
 * @file            1_2d_array_to_1d_array.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-04-29
 * @question:       You'll be given an array which is 2D, you have to convert this array into a 1D format
 */

#include <bits/stdc++.h>
using namespace std;

void convert2D(vector<vector<int>> &array2D, int row, int col, vector<int> &array1D)
{

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            array2D[i][j] = array1D[col * i + j];
        }
    }

    cout << "2D array\n";
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << array2D[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}

int main()
{
    cout << "Enter size: ";
    int n;
    cin >> n;
    vector<int> array1D(n);

    cout << "Enter elements for 1D array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> array1D[i];
    }

    int row, col;
    cout << "Enter row and column for 2D array: ";
    cin >> row >> col;
    vector<vector<int>> array2D(row, vector<int>(col));

    convert2D(array2D, array2D.size(), array2D[0].size(), array1D);

    return 0;
}