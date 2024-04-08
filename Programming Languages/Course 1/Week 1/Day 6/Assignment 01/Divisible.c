#include <stdio.h>

int main()
{
    long long N;
    scanf("%lld", &N);

    if (N % 3 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}