#include <stdio.h>

void ans1(int n)
{
    /// using count variable to store even number count
    /// if even counter is 0 then there is no even numbers
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!(i & 1))
        {
            printf("%d\n", i);
            cnt++;
        }
    }

    if (cnt == 0)
        printf("-1\n");
}

/// Optimized solution
void ans2(int n)
{
    /// there is only a single way that there will be no even
    /// number in a range. If we set our range within a single number
    /// that means, if input is 1 then the range will 1 to 1 so, we have
    /// only one number in a range and that is not even or odd
    if (n == 1)
    {
        printf("-1\n");
        return;
    }

    for (int i = 1; i <= n; i++)
        if (!(i & 1))
            printf("%d\n", i);
}

int main()
{
    int n;
    scanf("%d", &n);
    ans1(n);
    // ans2(n);

    return 0;
}