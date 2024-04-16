#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x1 = 0, x2 = 0;
    int pathanCnt = 0, tigerCnt = 0, drawCnt = 0;

    while (n--)
    {
        scanf("%d %d", &x1, &x2);
        if (x1 > x2)
            ++tigerCnt;
        else if (x2 > x1)
            ++pathanCnt;
        else
            ++drawCnt;
    }

    if (pathanCnt > tigerCnt && pathanCnt > drawCnt)
        printf("Pathan\n");
    else if (tigerCnt > pathanCnt && tigerCnt > drawCnt)
        printf("Tiger\n");
    else
        printf("Draw\n");

    return 0;
}