#include <stdio.h>

long long factorial(int n)
{
    /// fact(N) = fact(N - 1) * N;
    if (n == 0 || n == 1)
        return 1;

    return factorial(n - 1) * n;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lld\n", factorial(n));

    return 0;
}