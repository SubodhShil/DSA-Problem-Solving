#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int cnt = 0;

    int storeIndex[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        /// storing positions to an array
        if (arr[i] <= 10)
            storeIndex[cnt++] = i;
    }

    for (int i = 0; i < cnt; i++)
    {
        printf("A[%d] = %d\n", storeIndex[i], arr[storeIndex[i]]);
    }

    return 0;
}