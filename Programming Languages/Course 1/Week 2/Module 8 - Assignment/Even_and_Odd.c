#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int even_sum = 0, odd_sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            even_sum += x;
        }
        else
        {
            odd_sum += x;
        }
    }

    printf("%d %d", even_sum, odd_sum);

    return 0;
}