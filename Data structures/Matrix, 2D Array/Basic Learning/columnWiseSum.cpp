#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter row and column size: ";
    cin >> row >> col;

    int arr[row][col];
    int columnSum[col];

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < col; ++j)
    {
        int sum = 0;
        for (int i = 0; i < row; ++i)
        {
            sum += arr[i][j];
        }
        columnSum[j] = sum;
    }

    for (int i = 0; i < col; ++i)
    {
        cout << "Col " << i + 1 << " Sum = " << columnSum[i] << endl;
    }

    return 0;
}
