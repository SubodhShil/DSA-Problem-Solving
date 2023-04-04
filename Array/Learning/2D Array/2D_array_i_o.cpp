#include <bits/stdc++.h>
using namespace std;

#define vecIP(vec)      \
    for (auto &i : vec) \
    cin >> i

#define vec2D(n, m) vector<vector<int>> vec(n, vector<int>(m, 0))
#define vec2D_input(vec, n, m)      \
    for (int i = 0; i < n; i++)     \
        for (int j = 0; j < m; j++) \
    cin >> vec[i][j]

int main()
{
    /// Single dimension vector
    // vector<int> vec(5);
    // vecIP(vec);

    // for (auto &x : vec)
    //     cout << x << "\n";

    /// 2D vector or matrix
    // vector<vector<int>> matrix(3, vector<int>(3, 0));
    cout << "Enter row and column: ";
    int row, col;
    cin >> row >> col;
    vec2D(row, col);

    cout << "Input elements for 2D array: ";
    vec2D_input(vec, row, col);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cout << vec[i][j] << " good\n";

    return 0;
}