#include <stdio.h>

int main()
{

    /// the difference is not quite practical to see the difference, since both will get the same result
    int i = 10;
    i++;
    printf("i = %d\n", i);

    /// 'x' is pre-incremented so x will update imidiately
    /// 'y' on the other hand is post-incremented so the value will be update in the next statement where 'y' will encounter again
    int x = 10, y = 10;
    printf("++x = %d\n", ++x);
    printf("++y = %d\n", ++y);

    return 0;
}