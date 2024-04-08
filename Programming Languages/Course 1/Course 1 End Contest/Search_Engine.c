#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int p = 1; p <= t; ++p)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);

        int target = 0;
        scanf("%d", &target);

        int i = 0;
        for (i = 0; i < n; ++i)
        {
            if (arr[i] == target)
            {
                break;
            }
        }

        if (i < n)
            printf("Case %d: %d\n", p, i + 1);
        else
            printf("Case %d: Not Found\n", p);
    }

    return 0;
}