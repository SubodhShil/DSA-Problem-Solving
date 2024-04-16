#include <stdio.h>
#include <string.h>

int main()
{
    int vowelsCount = 0;

    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowelsCount++;
    }

    printf("%d\n", vowelsCount);

    return 0;
}