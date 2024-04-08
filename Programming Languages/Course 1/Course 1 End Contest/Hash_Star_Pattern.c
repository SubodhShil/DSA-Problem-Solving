#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        if (n / 2 == i)
        {
            for (int i = 0; i < n; ++i)
                printf("#");
        }

        else
        {
            for (int j = 0; j < n; ++j)
            {
                if (n / 2 == j)
                    printf("#");
                else
                    printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}