#include <stdio.h>

int main()
{
    int a, b, i, j;
    scanf("%d %d", &a, &b);

    for (i = 0; i < b; i++)
    {
        for (j = 1; j <= a; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
