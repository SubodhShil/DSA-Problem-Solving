#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter row and column size: ";
    cin >> row >> col;

    vector<int> rowSum;
    int arr[row][col];

    for (int i = 0; i < row; ++i)
    {
        int sum = 0;
        for (int j = 0; j < col; ++j)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }

        rowSum.push_back(sum);
    }

    for (int i = 0; i < row; ++i)
    {
        cout << "Row " << i + 1 << " Sum = " << rowSum[i] << endl;
    }

    return 0;
}