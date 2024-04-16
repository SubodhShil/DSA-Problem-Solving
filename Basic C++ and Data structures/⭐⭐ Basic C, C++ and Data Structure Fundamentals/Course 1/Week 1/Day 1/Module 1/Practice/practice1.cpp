#include <stdio.h>

int main()
{
    printf("Hello World\n");
    printf("\\\\");

    /// integer data type
    int myAge = 50;
    printf("\nMy age is %d", myAge);

    printf("\n");
    /// float value overflow
    float price = 10000.52;
    printf("Fractional number is: %0.2f", price);

    /// taking user input
    // printf("\n");
    // char name[100];
    // printf("Enter your name: ");
    // scanf("%s", &name);
    // printf("Hello, %s", &name);

    ///
    printf("\n");
    int a, b;
    // scanf("%d%*c%*c%d", &a, &b); // 10 x 20
    scanf("%d%*s%d", &a, &b);
    printf("%d x %d = %d\n", a, b, a * b);

    /// float -> 6-8 digits
    /// double -> 15-16 digits

    return 0;
}