#include <stdio.h>

int main()
{
    int i;
    scanf("%d", &i);

    int even_cnt = 0, odd_cnt = 0, positive_cnt = 0, negative_cnt = 0;

    while (i--)
    {
        int n;
        scanf("%d", &n);

        if (n & 1)
            odd_cnt++;
        else if (!(n & 1))
            even_cnt++;

        if (n < 0)
            negative_cnt++;
        else if (n > 0)
            positive_cnt++;
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even_cnt, odd_cnt, positive_cnt, negative_cnt);

    return 0;
}