/*
 * 2D array problem
 * The problem takes input of a 2D array and
 * take input for sub matrix and return the sum of
 * elements among the sub matrix
 */

/*
                                        ^ Verdict ^
 * Recheck
 * Don't rush
 * Think out of the box
 * Test it with edge and custom test cases
 * Don't be arrogant expecting your algorithm to pass all the test cases
 */

#include <bits/stdc++.h>
using namespace std;

void ans()
{
    int n, m, q;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    cin >> q;
    while (q--)
    {
        int i1, j1, i2, j2, ans = 0;
        cin >> i1 >> j1 >> i2 >> j2;

        for (int a = i1 - 1; a < i2; a++)
        {
            for (int b = j1 - 1; b < j2; b++)
            {
                ans += matrix[a][b];
            }
        }

        cout << ans << endl;
    }
}

int main()
{
    ans();

    return 0;
}