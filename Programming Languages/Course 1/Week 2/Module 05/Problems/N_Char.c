#include <stdio.h>
#include <ctype.h>
void ans1()
{
    char ch;
    scanf("%c", &ch);

    /// if lowercase than convert to uppercase
    if (ch >= 'a' && ch <= 'z')
    {
        // ch = ch - 32;
        // printf("%c", ch);

        /// skip into one liner
        printf("%c", ch - 32);
    }

    /// if uppercase than convert to lowercase
    // else if (ch >= 'A' && ch <= 'Z')
    // {
    //     ch = ch + 32;
    //     printf("%c", ch);
    // }
    else
        printf("%c", (ch + 32));
}

void ans2()
{
    char ch;
    scanf("%c", &ch);

    if (islower(ch))
        printf("%c", ch - 32);
    else
        printf("%c", ch + 32);
}

/// difference between 'a' and 'A' in ASCII is 32
int main()
{
    // ans1();
    ans2();

    return 0;
}
