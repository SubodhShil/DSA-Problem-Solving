#include <bits/stdc++.h>
using namespace std;

/// Bruteforce solution
class Solution1
{
public:
    void checkDiagonal()
    {
        int row, col;
        cin >> row >> col;
        int arr[row][col];

        /// check if diagonal
        int totalElements = row * col;
        int diagonalElements = row;
        int diagonalElementCount = 0;

        /// 2D array input
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cin >> arr[i][j];
                if (arr[i][j] > 0)
                    ++diagonalElementCount;
            }
        }

        if (diagonalElementCount == diagonalElements)
            cout << "2D array is matrix diagonal";

        else
            cout << "2D array is not matrix diagonal";
    }
};

class Solution2
{
public:
    void checkDiagonal()
    {
        int row, col;
        cin >> row >> col;
        int arr[row][col];
        bool isDiagonal = true;

        // 2D array input
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < col; ++j)
                cin >> arr[i][j];

        for (int i = 0; i < row; ++i)
        {
            if (arr[i][i] == 0)
            {
                isDiagonal = false;
                break;
            }
        }

        if (isDiagonal)
            cout << "2D array is a diagonal matrix";
        else
            cout << "2D array is not a diagonal matrix";
    }
};

int main()
{
    Solution2 sol2;
    sol2.checkDiagonal();

    return 0;
}