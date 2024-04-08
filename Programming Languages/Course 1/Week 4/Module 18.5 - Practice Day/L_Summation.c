#include <stdio.h>

void print(int *arr, int n, long long sum)
{
    if (n == -1)
    {
        printf("%lld\n", sum);
        return;
    }

    sum += arr[n];
    print(arr, n - 1, sum);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    long long sum = 0;

    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    print(arr, n - 1, sum);

    return 0;
}