#include <stdio.h>
#include <string.h>

int main()
{
    int counter[26] = {0};

    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        counter[ch - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        printf("%c - %d\n", i + 97, counter[i]);
    }

    return 0;
}