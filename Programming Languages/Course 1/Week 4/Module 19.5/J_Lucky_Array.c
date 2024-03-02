#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int minElement = 1e5;
    int minElementCnt = 0;

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < minElement)
            minElement = arr[i];
    }

    for (int i = 0; i < n; ++i)
        if (arr[i] == minElement)
            ++minElementCnt;

    if (minElementCnt % 2 == 0)
        printf("Unlucky\n");
    else
        printf("Lucky\n");

    return 0;
}