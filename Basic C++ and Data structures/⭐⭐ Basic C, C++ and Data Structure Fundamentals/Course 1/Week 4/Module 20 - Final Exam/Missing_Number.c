#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int s, a, b, c;
        scanf("%d %d %d %d", &s, &a, &b, &c);
        int res = s - (a + b + c);
        printf("%d\n", res);
    }

    return 0;
}