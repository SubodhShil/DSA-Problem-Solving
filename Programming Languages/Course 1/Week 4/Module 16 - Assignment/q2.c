#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int spaeCnt = n - 1;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= spaeCnt; ++j)
        {
            printf(" ");
        }

        --spaeCnt;

        for (int j = 1; j <= i; ++j)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}