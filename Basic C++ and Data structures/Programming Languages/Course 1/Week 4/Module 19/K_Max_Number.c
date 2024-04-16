#include <stdio.h>
#include <limits.h>

int max_element(int *arr, int n, int i)
{
    /// base case
    if (i == n)
        return INT_MIN;

    int maxElement = max_element(arr, n, i + 1);

    if (arr[i] > maxElement)
        return arr[i];

    return maxElement;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    printf("%d", max_element(arr, n, 0));

    return 0;
}