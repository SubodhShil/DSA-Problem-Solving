#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int x;
        scanf("%d", &x);

        /// the constraint says: 0 <= N <= 10^9
        do
        {
            printf("%d ", x % 10);
            x /= 10;
        } while (x);

        printf("\n");
    }

    return 0;
}