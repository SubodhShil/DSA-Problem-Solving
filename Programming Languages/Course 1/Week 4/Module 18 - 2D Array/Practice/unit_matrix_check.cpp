#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    /// 2D array input

    int countOne = 0;
    int arr[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    bool isUnitMatrix = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == j && arr[i][j] != 1)
            {
                isUnitMatrix = 0;
            }
            else if (i != j && arr[i][j] != 0)
            {
                isUnitMatrix = 0;
            }
        }
    }

    if (isUnitMatrix)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}