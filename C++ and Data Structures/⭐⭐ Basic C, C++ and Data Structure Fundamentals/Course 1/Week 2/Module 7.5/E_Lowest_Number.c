#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int lowest = 1e5 + 10;
    int lowestPos = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (lowest > arr[i])
        {
            lowest = arr[i];
            lowestPos = i + 1;
        }
    }

    printf("%d %d", lowest, lowestPos);

    return 0;
}