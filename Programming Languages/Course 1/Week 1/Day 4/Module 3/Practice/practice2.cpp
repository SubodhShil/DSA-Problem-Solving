#include <stdio.h>

int main()
{
    int N = 0;
    printf("N = ");
    scanf("%d", &N);

    /// print number with odd or even notation
    for (int i = 1; i <= N; i++)
    {
        if (i & 1 == 1)
            printf("%d - Odd\n", i);
        else
            printf("%d - Even\n", i);
    }

    return 0;
}