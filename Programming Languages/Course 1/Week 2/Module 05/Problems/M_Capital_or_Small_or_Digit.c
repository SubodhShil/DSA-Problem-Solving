#include <stdio.h>
#include <ctype.h>

void ans(char ch)
{
    if (ch >= '0' && ch <= '9')
        printf("IS DIGIT");
    else if (islower(ch))
        printf("ALPHA\nIS SMALL\n");
    else
        printf("ALPHA\nIS CAPITAL\n");
}

int main()
{
    char ch;
    scanf("%c", &ch);
    ans(ch);

    return 0;
}