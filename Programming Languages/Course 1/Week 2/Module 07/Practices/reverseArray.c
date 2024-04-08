#include <stdio.h>

int main()
{
    /// variable size array declaration
    int n;
    scanf("%d", &n);
    int arr[n];

    /// enter array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /// store in the array a secondary array in reverse order
    int arr2[n];
    for (int i = n - 1; i >= 0; i--)
    {
        arr2[n - 1 - i] = arr[i];
    }

    /// print the reversed array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
}