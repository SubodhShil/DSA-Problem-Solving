#include <stdio.h>
#include <limits.h>

int main()
{
    int max_number = INT_MIN;
    int i;
    scanf("%d", &i);

    while (i--)
    {
        int n;
        scanf("%d", &n);

        if (max_number < n)
            max_number = n;
    }

    printf("%d", max_number);

    return 0;
}