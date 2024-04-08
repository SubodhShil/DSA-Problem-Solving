#include <bits/stdc++.h>
using namespace std;

void ans()
{
    int n, x, y;
    cin >> n >> x >> y;
    int matrix[n + 1][n + 1];

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    /// to swap row elements, row are fixed and columns move
    for (int j = 1; j <= n; ++j)
    {
        swap(matrix[x][j], matrix[y][j]);
    }

    /// to swap column elements, column are fixed and rows move
    for (int i = 1; i <= n; ++i)
    {
        swap(matrix[i][x], matrix[i][y]);
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        if (i <= n - 1)
            cout << endl;
    }
}

int main()
{

    ans();

    return 0;
}