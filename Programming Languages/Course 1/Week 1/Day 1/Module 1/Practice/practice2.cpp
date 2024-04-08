#include <stdio.h>

int main()
{
    /// value limit of 10^9 for integer (4 byte)
    /// or leastmost 10 digit number
    // int a = 100000000;
    // int b = 1e8; /// total digit: 1 + 8 = 9 digits
    // printf("a is %d\nb is %d\n", a, a, b, b);

    // if (a == b)
    //     printf("True\n");

    // printf("______________________\n");

    // int c = 1e9; /// total digit: 1 + 9 = 10 digits
    // int d = 1000000000;

    // printf("c is %d\nd is %d\n", c, c, d, d);
    // if (c == d)
    //     printf("True\n");

    /// to store any number that has more than 10 digits
    /// prefer using long long int
    /// which can store at most 19 digit of number
    long long int longNumber = 1e18; // 1 + 18 = 19 digits
    printf("%lld\n", longNumber);

    return 0;
}