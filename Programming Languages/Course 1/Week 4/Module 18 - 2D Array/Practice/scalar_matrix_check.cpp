#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    void checkScalar()
    {
        int row, col;
        cin >> row >> col;
        /// edge case: scalar matrix need to be a square matrix
        if (row != col)
        {
            cout << "Row and column value are not same\n";
            return;
        }

        int arr[row][col];

        /// 2D array input
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < col; ++j)
                cin >> arr[i][j];

        bool isScalar = true;
        int scalarValue = arr[0][0];

        for (int i = 0; i < row; ++i)
        {
            /// if the scalar value is 0 or scalar values are not consistent then
            /// the matrix is not a scalar matrix
            if (arr[i][i] == 0 || arr[i][i] != scalarValue)
            {
                isScalar = false;
                break;
            }
        }

        if (isScalar)
            cout << "2D array is a scalar matrix";
        else
            cout << "2D array is not a scalar matrix";
    }
};

int main()
{
    Solution1 sol1;
    sol1.checkScalar();

    return 0;
}