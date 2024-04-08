#include <bits/stdc++.h>
using namespace std;

void columnWisePrint()
{
    int arr[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    /// print column wise
    /// row index will move fast
    for (int col = 0; col < 3; ++col)
    {
        for (int row = 0; row < 4; ++row)
        {
            cout << arr[row][col] << ' ';
        }

        cout << endl;
    }
}

void rowWisePrint()
{
    /// We usually display or print 2D array column wise
    int arr[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    /// print row wise
    /// column index will move fast
    for (int row = 0; row < 4; ++row)
    {
        for (int col = 0; col < 3; ++col)
        {
            cout << arr[row][col] << ' ';
        }

        cout << endl;
    }
}

int main()
{
    columnWisePrint();

    return 0;
}