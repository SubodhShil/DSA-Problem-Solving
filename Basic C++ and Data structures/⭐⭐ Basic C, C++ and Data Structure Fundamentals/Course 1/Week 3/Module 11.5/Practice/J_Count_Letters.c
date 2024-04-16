#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

void ans()
{

    char ch;
    int count[26] = {0};

    while (scanf("%c", &ch) != EOF)
    {
        count[ch - 'a']++;
    }

    // for (int i = 0; i < 26; ++i)
    // {
    //     if (count[i] > 0)
    //         printf("%c : %d\n", i + 'a', count[i]);
    // }

    for (int i = 'a'; i <= 'z'; ++i)
    {
        if (count[i - 'a'])
        {
            printf("%c : %d\n", i, count[i - 'a']);
        }
    }
}

int main()
{

    ans();

    return 0;
}