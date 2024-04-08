#include <stdio.h>

void ans(int n)
{
    if (n == 0)
        return;

    int digit = n % 10;
    ans(n / 10);
    printf("%d ", digit);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
            printf("0");
        else
            ans(n);

        printf("\n");
    }

    return 0;
}
