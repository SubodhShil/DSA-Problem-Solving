#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;
    scanf("%d %d", &start, &end);

    // start should always be smaller than end
    // edge case: start > end
    if (start > end)
    {
        // swapping
        int save = start;
        start = end;
        end = save;
    }

    // n = end
    int n = end;
    int sum1 = (n * (n + 1) / 2);

    // n = start - 1
    n = start - 1;
    int sum2 = (n * (n + 1) / 2);

    // sum1(1 -> end) - sum2(1 -> start - 1)
    int answer = sum1 - sum2;
    printf("answer = %d\n", answer);

    return 0;
}