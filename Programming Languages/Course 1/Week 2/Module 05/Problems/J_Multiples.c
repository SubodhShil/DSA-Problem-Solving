#include <stdio.h>

void ans(int n1, int n2)
{
    if (n1 % n2 == 0 || n2 % n1 == 0)
        printf("Multiples\n");
    else
        printf("No Multiples\n");
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    ans(n1, n2);

    return 0;
}