#include <bits/stdc++.h>
using namespace std;

int n, m, max_sum = INT32_MIN;
int matrix[20][20];

void maximumSum(int i = 0, int j = 0, int current_sum = matrix[0][0])
{
    if (i >= n - 1 and j >= m - 1)
    {
        max_sum = max(max_sum, current_sum);
        return;
    }

    /// go i + 1
    if (i + 1 <= n - 1)
        maximumSum(i + 1, j, current_sum + matrix[i + 1][j]);

    /// go j + 1
    if (j + 1 <= m - 1)
        maximumSum(i, j + 1, current_sum + matrix[i][j + 1]);
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> matrix[i][j];

    maximumSum();
    cout << max_sum << endl;

    return 0;
}