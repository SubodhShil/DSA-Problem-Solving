#include <stdio.h>

int main()
{
    int arr[5] = {10, 203, 30, 55, 44};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    printf("Sum of array is: %d", sum);

    return 0;
}