#include <stdio.h>

void solve(int n, int *arr)
{
    if (n == -1)
        return;

    else if (n >= 1 && n % 2 == 0)
        printf("%d ", arr[n]);

    else if (n == 0 && n % 2 == 0)
        printf("%d", arr[n]);

    solve(n - 1, arr);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    solve(n - 1, arr);

    return 0;
}