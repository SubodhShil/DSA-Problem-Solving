#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n, k, m, a, b, c;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;

    if (n != m)
    {
        cout << "It must be a square matrix, thus provide equal value of n and m" << endl;
        return 0;
    }

    // define the matrix
    int matrix[n][m];

    // Algorithm
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
                matrix[i][j] = i + 1;
            else
                matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}