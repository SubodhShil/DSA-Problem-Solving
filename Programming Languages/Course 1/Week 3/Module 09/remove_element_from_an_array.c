#include <stdio.h>
#include <stdlib.h>

/// take an user input array, a valid position where to remove
/// fill the extra element with the minimum value of 'int' range
void removeElementAtPosition(int n, int k)
{
    int arr[n];

    printf("Enter array elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = k; i < n; ++i)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = INT_MIN;

    /// to show only the valid elements after removing an element
    /// we can display the array by showing an element less
    /// this is because the array is static and it's not possible to
    /// change it's actual size in runtime or after once declared
    for (int i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);
}

/// misc: remove 'n' elements
/// misc: remove element by value

int main()
{
    removeElementAtPosition(5, 1);

    return 0;
}