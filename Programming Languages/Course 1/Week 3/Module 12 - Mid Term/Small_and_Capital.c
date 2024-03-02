#include <stdio.h>
#include <string.h>

int main()
{
    int lowercaseCount = 0, uppercaseCount = 0;

    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
            lowercaseCount++;
        else
            uppercaseCount++;
    }

    printf("%d %d\n", uppercaseCount, lowercaseCount);

    return 0;
}