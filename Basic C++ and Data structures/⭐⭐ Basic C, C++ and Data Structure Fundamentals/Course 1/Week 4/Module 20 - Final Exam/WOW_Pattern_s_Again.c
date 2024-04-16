#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int characterCnt = 0;

    for (int i = 1; i <= n; ++i)
    {

        /// printing spaces
        for (int j = 1; j <= n - i; ++j)
        {
            printf(" ");
        }

        /// printing characters
        if (i % 2 == 0)
        {
            for (int c = 1; c <= i + characterCnt; ++c)
            {
                printf("*");
            }
        }
        else
        {
            for (int c = 1; c <= i + characterCnt; ++c)
            {
                printf("^");
            }
        }
        ++characterCnt;

        printf("\n");
    }

    return 0;
}