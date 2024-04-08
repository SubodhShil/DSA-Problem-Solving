#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

void countingOccurrences()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    /// counts digits from 0 to 20
    int range;
    scanf("%d", &range);
    int counting[range + 1];

    printf("\n----------------------\n");

    /// initialize all elements with value zero
    memset(counting, 0, sizeof(counting));

    for (int i = 0; i < n;)
    {
        scanf("%d", &arr[i]);
        if (arr[i] <= range + 1 && arr[i] >= 0)
        {
            counting[arr[i]]++;
            ++i;
        }
        else
            printf("Enter number between 0 to %d\n", range + 1);
    }

    /// displaying counts
    printf("\n----------------------\n");
    for (int i = 0; i < range + 1; ++i)
        printf("%d = %d\n", i, counting[i]);
}

int main()
{
    countingOccurrences();

    return 0;
}