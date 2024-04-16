#include <stdio.h>

int main()
{
    /// print odd numbers among 1 till 100
    /// skip even numbers using continue statement

    for (int i = 1; i <= 100; i++)
    {
        if (!(i & 1))
            continue;
        else
            printf("%d ", i);
    }

    return 0;
}