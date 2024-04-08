#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            cin >> arr[i][j];

    int maxRowSum = INT32_MIN;
    int maxRowIndex = -1;
    int maxColumnSum = INT32_MIN;
    int maxColumnIndex = -1;

    /// calculating maximum row sum
    for (int i = 0; i < row; ++i)
    {
        int sum = 0;
        for (int j = 0; j < col; ++j)
        {
            sum += arr[i][j];
        }

        if (sum > maxRowSum)
        {
            maxRowSum = sum;
            maxRowIndex = i;
        }
    }

    /// calculating the maximum column sum
    for (int i = 0; i < col; ++i)
    {
        int sum = 0;
        for (int j = 0; j < row; ++j)
        {
            sum += arr[j][i];
        }

        if (sum > maxColumnSum)
        {
            maxColumnSum = sum;
            maxColumnIndex = i;
        }

        maxColumnSum = max(sum, maxColumnSum);
    }

    cout << "Maximum row sum: " << maxRowSum << " at row index: " << maxRowIndex << endl;
    cout << "Maximum column sum: " << maxColumnSum << " at column index: " << maxColumnIndex << endl;

    return 0;
}