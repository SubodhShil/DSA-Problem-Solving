#include <stdio.h>

int main()
{
    /// print 1 to 100
    /// use break statement
    /// as break statement encounters it stop process of loop and don't do any further task

    int cnt = 1;

    for (; 1;)
    {
        if (cnt > 100)
            break;

        printf("%d ", cnt);

        cnt++;
    }
}