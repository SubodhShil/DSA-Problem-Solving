#include <stdio.h>

/// 1. Has Return + Parameter
int addition(int a, int b)
{
    return a + b;
}

/// 2. Has Return + No Parameter
int subtraction()
{
    printf("Enter two number for subtraction: ");
    int a, b;
    scanf("%d %d", &a, &b);

    return a - b;
}

/// 3. No Return + Parameter
void product(int a, int b)
{
    printf("%d\n", a * b);
}

/// 4. No Return + No Parameter
void division()
{
    printf("Enter two number for division: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a / b);
}

int main()
{
    /// 1. Has Return + Parameter
    printf("Enter two number for addition: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", addition(a, b));

    /// 2. Has Return + No Parameter
    printf("%d\n", subtraction(a, b));

    /// 3. No Return + Parameter
    printf("Enter two number for multiplication: ");
    int x, y;
    scanf("%d %d", &x, &y);
    product(x, y);

    /// 4. No Return + No Parameter
    division();

    return 0;
}