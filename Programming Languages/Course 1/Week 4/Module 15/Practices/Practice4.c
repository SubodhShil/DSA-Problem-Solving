#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arraySize; ++i)
    {
        // printf("%d ", *(arr + i));
        // printf("%d ", *(i + arr));
        // printf("%d ", arr[i]);
        printf("%d ", i[arr]);
    }

    return 0;
}