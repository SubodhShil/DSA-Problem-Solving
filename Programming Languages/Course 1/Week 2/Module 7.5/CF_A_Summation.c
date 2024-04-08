/// @problem_source: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long arr[n];
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("%lld", (sum < 0) ? sum * -1 : sum);

    return 0;
}