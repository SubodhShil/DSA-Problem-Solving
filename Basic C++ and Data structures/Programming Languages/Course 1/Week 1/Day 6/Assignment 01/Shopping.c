#include <stdio.h>

int main()
{
    long long amount;
    scanf("%lld", &amount);

    if (amount <= 1000)
        printf("Bad luck!\n");
    else if (amount >= 1500)
    {
        printf("I will buy Punjabi\n");
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
    }
    else if (amount < 1500 && amount > 1000)
    {
        printf("I will buy Punjabi\n");
    }

    return 0;
}