#include <stdio.h>

int main()
{
    int maxNumber = 0;
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > maxNumber)
            maxNumber = arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", maxNumber - arr[i]);
    }

    return 0;
}