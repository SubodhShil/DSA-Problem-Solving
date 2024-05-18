#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

/// Real world example: lexicographical comparison is much
/// visible in dictionaries to find words
/// in the program you've to find which word is
/// lexicographically smaller or bigger
void checkLexicographical(char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] > str2[i])
        {
            printf("%s is lexicographically bigger\n", str1);
            return;
        }
        else if (str1[i] < str2[i])
        {
            printf("%s is lexicographically bigger\n", str2);
            return;
        }
    }

    if (strlen(str1) == strlen(str2))
    {
        printf("Similar\n");
    }
    else if (strlen(str1) > strlen(str2))
    {
        printf("%s is lexicographically bigger\n", str1);
    }
    else
    {
        printf("%s is lexicographically bigger\n", str2);
    }
}

/// check a word is lexicographical or not using
/// built in functions
void checkLexicographical2(char str1[], char str2[])
{
    int resultValue = strcmp(str1, str2);

    /*
            strcmp(a, b)
            1   ->  b small, a big
            0   ->  same
            -1  ->  a small, b big
     */

    if (resultValue == 1)
        printf("%s is lexicographically bigger\n", str1);
    else if (resultValue == -1)
        printf("%s is lexicographically bigger\n", str2);
    else if (resultValue == 0)
        printf("Both is lexicographically similar\n");
}

int main()
{
    char str1[100], str2[100];
    scanf("%s %s", &str1, &str2);

    checkLexicographical(str1, str2);
    checkLexicographical2(str1, str2);

    return 0;
}