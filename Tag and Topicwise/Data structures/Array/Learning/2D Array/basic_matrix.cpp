#include <bits/stdc++.h>
using namespace std;

class Practice1
{
public:
    void hardCodeInputMatrix()
    {
        /// to hardcode array elements, individually mention every element
        int arr[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};
    }

    void columnWiseInputOutput()
    {
        int row, column;
        cin >> row >> column;

        int arr[row][column];

        /// column will appear first
        for (int i = 0; i < column; ++i)
        {
            for (int j = 0; j < row; ++j)
            {
                cin >> arr[j][i];
            }
        }

        for (int i = 0; i < column; ++i)
        {
            for (int j = 0; j < row; ++j)
            {
                cout << arr[i][j] << " ";
            }

            cout << endl;
        }
    }
};

class Practice2
{
public:
    bool isPresentTargetElement(int arr[][4], int target, int row, int column)
    {

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < column; ++j)
            {
                if (arr[i][j] == target)
                    return 1;
            }
        }

        return 0;
    }

    void findElement()
    {
        int arr[3][4] = {
            {10, 12, 15},
            {2, 5, 7},
            {9, 210, 33}};

        int target;
        cin >> target;

        if (isPresentTargetElement(arr, target, 3, 4))
        {
            cout << "Target is found\n";
        }
        else
            cout << "Target not found\n";
    }
};

int main()
{
    Practice1 p1;
    // p1.columnWiseInputOutput();

    Practice2 p2;
    p2.findElement();

    return 0;
}