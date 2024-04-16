#include <stdio.h>

int main()
{
    /// the question ask you to find the matrix sum

    int n, m;
    scanf("%d %d", &n, &m);
    int sum = 0;
    int arr1[n][m];
    int arr2[n][m];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            scanf("%d", &arr1[i][j]);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            scanf("%d", &arr2[i][j]);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            printf("%d ", arr1[i][j] + arr2[i][j]);

        printf("\n");
    }

    return 0;
}