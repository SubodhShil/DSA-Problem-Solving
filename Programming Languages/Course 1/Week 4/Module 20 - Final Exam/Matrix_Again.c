#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            scanf("%d", &arr[i][j]);

    /// printing the last row
    int lastRowNumber = n - 1;
    for (int i = 0; i < m; ++i)
        printf("%d ", arr[lastRowNumber][i]);
    printf("\n");

    /// printing the last column
    int lastColumnNumber = m - 1;
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i][lastColumnNumber]);

    return 0;
}