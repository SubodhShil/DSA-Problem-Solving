#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 3;
    int sum = 0;
    int isTriangle = 1;

    while (i--)
    {
        int x;
        scanf("%d", &x);

        if (x > 0)
            sum += x;
        else
            isTriangle = 0;
    }

    if (isTriangle == 1 && sum != 0 && sum % 3 == 0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
