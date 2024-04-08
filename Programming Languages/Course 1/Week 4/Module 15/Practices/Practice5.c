#include <stdio.h>

void arrayPrint(int *arr)
{
    int n = sizeof(arr) / sizeof(arr[0]);
    /// the expression sizeof(arr) is evaluating to the size of a pointer variable (either 4 or 8 bytes depending on your system), not the size of the original array.
    printf("Size of array = %d\n", n);

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
}

void arrayPrintFix(int *arr, int n)
{
    printf("Size of array = %d\n", n);
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    arrayPrint(arr);
    printf("\n");
    int n = sizeof(arr) / sizeof(arr[0]);
    arrayPrintFix(arr, n);

    return 0;
}
