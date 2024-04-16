/// @problem_source: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, search_key = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &search_key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search_key)
        {
            printf("%d\n", i);
            exit(0);
        }
    }

    printf("-1");

    return 0;
}