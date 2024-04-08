#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;

    int array2D[row][column];

    /// 2D array input
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < column; ++j)
            cin >> array2D[i][j];

    /// 2D array output
    cout << "+";
    for (int j = 0; j < column * 6; ++j)
        cout << "-";
    cout << "+" << endl;

    for (int i = 0; i < row; ++i)
    {
        cout << "|";
        for (int j = 0; j < column; ++j)
            cout << setw(3) << array2D[i][j] << setw(3) << "|";
        cout << endl;

        cout << "+";
        for (int j = 0; j < column * 6; ++j)
            cout << "-";
        cout << "+" << endl;
    }

    return 0;
}
