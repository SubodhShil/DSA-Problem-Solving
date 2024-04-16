#include <stdio.h>

/// two pointers technique
void reverseArray(int *arr, int size)
{
    /// taking two index pointers
    int i = 0, j = size - 1;

    while (i < j)
    {
        arr[i] ^= arr[j];
        arr[j] ^= arr[i];
        arr[i] ^= arr[j];

        i++, j--;
    }

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

/// avoid an extra pointer
void reverseArray_w2(){}

int main()
{
    int arr[] = {5, 1, 100, 200, -33};
    int size = (sizeof(arr) / sizeof(int));
    reverseArray(arr, size);

    return 0;
}