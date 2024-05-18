#include <stdio.h>

void callByValue(int x)
{
    x = x + 30;
    printf("Local x = %d\n", x);
}

void callByReference(int *y)
{
    *y = 1000;
    printf("Local y (by dereferencing) = %d\n", *y);
}

int main()
{
    int x = 300;
    printf("x value before = %d\n", x);
    callByValue(x);
    printf("x value at main = %d\n", x);

    printf("------------------------\n");

    int y = 500;
    printf("y value before = %d\n", y);
    callByReference(&y);
    printf("y value after = %d\n", y);

    return 0;
}