#include <stdio.h>

int count_before_zero(int arr[], int n)
{
    int cntBeforeZero = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 0)
            break;
        else
            cntBeforeZero++;
    }

    return cntBeforeZero;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", count_before_zero(arr, n));

    return 0;
}