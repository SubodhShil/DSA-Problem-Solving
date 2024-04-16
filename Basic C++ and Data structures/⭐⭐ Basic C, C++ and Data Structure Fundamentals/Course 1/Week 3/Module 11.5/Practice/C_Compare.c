/**
 * @file            C_Compare.c
 * @author          Subodh Chandra Shil
 * @date            2023-04-20
 * @resource:       https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
 */

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

void ans()
{
    char word1[21];
    char word2[21];
    scanf("%s %s", &word1, &word2);

    int compare = strcmp(word1, word2);
    if (compare > 0)
        printf("%s\n", word2);
    else if (compare < 0)
        printf("%s\n", word1);
    else
        printf("%s\n", word1);
}

int main()
{
    ans();

    return 0;
}