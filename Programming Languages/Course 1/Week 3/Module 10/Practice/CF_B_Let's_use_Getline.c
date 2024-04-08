#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

const int MAX = 1e6;

int main()
{
    char s[MAX];
    fgets(s, MAX, stdin);

    int i = 0;
    while (s[i] != '\\')
        printf("%c", s[i++]);

    return 0;
}