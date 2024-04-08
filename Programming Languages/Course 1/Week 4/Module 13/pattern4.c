#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    /// there will be total (2n - 1) number of lines to be
    /// printed in the pyramid to make the diamond
    int totalLines = 2 * n - 1;

    /// top pyramid
    int topPyramidLines = n;
    int topPyramidSpaceCnt = topPyramidLines - 1;
    int topPyramidStarCnt = 1;
    for (int i = 1; i <= topPyramidLines; ++i)
    {
        /// print spaces
        for (int s = 1; s <= topPyramidSpaceCnt; ++s)
        {
            printf(" ");
        }
        --topPyramidSpaceCnt;

        /// print stars
        for (int s = 1; s <= topPyramidStarCnt; ++s)
        {
            printf("*");
        }
        topPyramidStarCnt += 2;

        printf("\n");
    }

    /// bottom pyramid
    int bottomPyramidLines = totalLines - n;
    int bottomPyramidSpaceCnt = 1;
    int bottomPyramidStarCnt = 2 * n - 3;
    for (int i = 1; i <= bottomPyramidLines; ++i)
    {
        /// print spaces
        for (int s = 1; s <= bottomPyramidSpaceCnt; ++s)
        {
            printf(" ");
        }
        ++bottomPyramidSpaceCnt;

        /// print stars
        for (int s = bottomPyramidStarCnt; s >= 1; --s)
        {
            printf("*");
        }
        bottomPyramidStarCnt -= 2;

        printf("\n");
    }

    return 0;
}