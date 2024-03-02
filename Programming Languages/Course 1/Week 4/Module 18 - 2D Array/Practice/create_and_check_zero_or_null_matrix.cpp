#include <bits/stdc++.h>
using namespace std;

int countZero;

class Solution1
{
public:
    /// check every element and when encounters non-zero element
    /// return false since the array is not a null matrix
    bool isNullMatrix(int arr[][50], int row, int col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (arr[i][j] > 0)
                    return false;
            }
        }

        return true;
    }
};

class Solution2
{
public:
    /// while input count non-zero elements, if count is more than zero
    /// the array is not a null matrix
    bool isNullMatrix()
    {
        if (countZero > 0)
            return false;

        return true;
    }
};

void input_output(int arr[][50], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cin >> arr[i][j];
            if (arr[i][j] > 0)
                ++countZero;
        }
    }
}

void display2DArray(int arr[][50], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            cout << arr[i][j] << "\t";

        cout << endl;
    }
}

int main()
{
    int row, col;
    cin >> row >> col;
    int arr[row][50]; // second dimension is fixed to 50

    input_output(arr, row, col);
    display2DArray(arr, row, col);

    Solution2 sol2;
    if (sol2.isNullMatrix())
        cout << "Null matrix\n";
    else
        cout << "Not a null matrix\n";

    return 0;
}
