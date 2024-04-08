#include <bits/stdc++.h>
using namespace std;

#define vecIP(vec)      \
    for (auto &i : vec) \
    cin >> i

#define vec2D(n, m) vector<vector<int>>(n, vector<int>(m, 0))
#define vec2D_input(vec, n, m)      \
    for (int i = 0; i < n; i++)     \
        for (int j = 0; j < m; j++) \
    cin >> vec[i][j]

void display2Darray(vector<vector<int>> &matrix)
{
    /// calculating row
    int rowSize = matrix.size();

    /// calculating column
    int colSize = matrix[0].size();

    /// printing the 2D array
    for (int i = 0; i < rowSize; ++i)
    {
        for (int j = 0; j < colSize; ++j)
            cout << matrix[i][j] << ' ';

        cout << endl;
    }
}

int main()
{
    cout << "Enter row and column: ";
    int row, col;
    cin >> row >> col;
    vector<vector<int>> vec = vec2D(row, col);

    cout << "Input elements for 2D array: ";
    vec2D_input(vec, row, col);

    display2Darray(vec);

    return 0;
}
