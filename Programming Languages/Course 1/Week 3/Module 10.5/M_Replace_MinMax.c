#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ans()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    /// array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxElement = INT_MIN, minElement = INT_MAX;
    int maxElementIndex, minElementIndex;

    for (int i = 0; i < n; i++)
    {
        if (maxElement < arr[i])
        {
            maxElement = arr[i];
            maxElementIndex = i;
        }
        if (minElement > arr[i])
        {
            minElement = arr[i];
            minElementIndex = i;
        }
    }

    arr[maxElementIndex] = minElement;
    arr[minElementIndex] = maxElement;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    ans();

    return 0;
}