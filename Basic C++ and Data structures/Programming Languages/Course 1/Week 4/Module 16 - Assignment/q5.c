#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int len = strlen(str);

    /// taking two pointers
    int i = 0, j = len - 1;

    while (i < j)
    {
        if (str[i] != str[j])
            return 0;
        ++i, --j;
    }

    return 1;
}

int main()
{
    char str[11];
    scanf("%s", str);

    if (is_palindrome(str))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
