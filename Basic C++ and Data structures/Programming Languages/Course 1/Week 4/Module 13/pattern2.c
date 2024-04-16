#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int spaceCnt = n - 1;
    int starCnt = 1;

    for (int i = 1; i <= n; ++i)
    {
        /// printing whitespaces
        for (int j = 1; j <= spaceCnt; ++j)
        {
            printf(" ");
        }
        --spaceCnt;

        /// printing stars
        for (int i = 1; i <= starCnt; ++i)
        {
            printf("*");
        }
        starCnt += 2;

        printf("\n");
    }

    return 0;
}