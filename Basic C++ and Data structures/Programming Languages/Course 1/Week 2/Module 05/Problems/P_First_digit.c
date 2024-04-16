#include <stdio.h>

void ans(int n)
{
    int firstDigit = 0;

    while (n)
    {
        firstDigit = n % 10;
        n /= 10;
    }

    /// if n & 1 is 0 then even otherwise odd
    (!(firstDigit & 1)) ? printf("EVEN\n") : printf("ODD\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    ans(n);

    return 0;
}