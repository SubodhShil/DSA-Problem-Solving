/**
 * @file        T_Matrix.c
 * @author      Subodh Chandra Shil
 * @date        2023-05-09
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    /// 2D array input
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &arr[i][j]);

    /// Calculation
    /// main diagonal
    for (int i = 0; i < n; ++i)
        mainDiagonalSum += arr[i][i];

    /// secondary diagonal
    for (int i = 0, j = n - 1; i < n || j >= 0; ++i, --j)
        secondaryDiagonalSum += arr[i][j];

    int result = abs(mainDiagonalSum - secondaryDiagonalSum);
    printf("%d\n", result);

    return 0;
}