#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    /// sorting
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            /// swapping
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    if (n % 2 == 0)
    {
        printf("%d %d\n", arr[n / 2 - 1], arr[n / 2]);
    }
    else
    {
        printf("%d\n", arr[n / 2]);
    }

    return 0;
}