#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    int predefinedValue;
    cin >> row >> col >> predefinedValue;
    vector<vector<int>> matrix(row, vector<int>(col, predefinedValue));

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}