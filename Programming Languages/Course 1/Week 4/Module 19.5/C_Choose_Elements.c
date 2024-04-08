#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    long long sum = 0;

    long long arr[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%lld", &arr[i]);
    }

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

    for (int i = n - 1; i >= n - k; --i)
    {
        if (arr[i] > 0)
            sum += arr[i];
    }

    printf("%lld\n", sum);

    return 0;
}
