#include <stdio.h>

int main()
{
    int i = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }

    /// sum from 1 to N using for loop
    printf("\nSum from 1 to N\n");
    printf("Enter N = ");

    int N = 0;
    scanf("%d", &N);

    /// sum variable for keeping track of sum
    int sum = 0;

    for (int i = 1; i <= N; ++i)
    {
        sum += i;
    }
    printf("%d", sum);

    return 0;
}