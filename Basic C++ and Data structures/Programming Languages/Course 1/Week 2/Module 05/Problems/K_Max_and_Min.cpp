#include <stdio.h>

int bigger(int n1, int n2)
{
    return (n1 > n2) ? n1 : n2;
}

int smaller(int n1, int n2)
{
    return (n1 < n2) ? n1 : n2;
}

void ans(int n1, int n2, int n3)
{
    /// assume n1 is both minimum and maximum number among three
    int max = bigger(n1, bigger(n2, n3));
    int min = smaller(n1, smaller(n2, n3));

    printf("%d %d", min, max);
}

int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    ans(n1, n2, n3);

    return 0;
}