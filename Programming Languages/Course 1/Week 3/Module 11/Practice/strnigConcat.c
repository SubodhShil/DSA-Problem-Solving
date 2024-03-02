#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

/// in place
void stringConcat1()
{
    char word1[100];
    char word2[100];
    scanf("%s %s", &word1, &word2);

    int position = strlen(word1);

    for (int i = 0; i <= strlen(word2); ++i)
    {
        word1[position++] = word2[i];
    }

    printf("%s", word1);
}

/// using built in function
void stringConcat_built_in()
{
    char word1[100];
    char word2[100];
    scanf("%s %s", &word1, &word2);

    strcat(word1, word2);
    printf("%s", word1);
}

int main()
{
    stringConcat1();
    printf("\n");
    stringConcat_built_in();

    return 0;
}