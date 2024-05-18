#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1005];
    fgets(str, 1005, stdin);
    int capitalCnt = 0, smallCnt = 0, spaceCnt = 0;

    int n = strlen(str);
    for (int i = 0; i < n; ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            ++capitalCnt;
        else if (str[i] >= 'a' && str[i] <= 'z')
            ++smallCnt;
        else if (str[i] == ' ')
            ++spaceCnt;
    }

    printf("Capital - %d\n", capitalCnt);
    printf("Small - %d\n", smallCnt);
    printf("Spaces - %d\n", spaceCnt);

    return 0;
}