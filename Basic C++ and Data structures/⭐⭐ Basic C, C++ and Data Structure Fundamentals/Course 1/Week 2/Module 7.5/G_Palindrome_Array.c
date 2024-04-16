#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int leftPointer = 0, rightPointer = n - 1;

    while (leftPointer < rightPointer)
    {
        if (arr[leftPointer++] != arr[rightPointer--])
        {
            printf("NO\n");
            exit(0);
        }
    }

    printf("YES\n");

    return 0;
}