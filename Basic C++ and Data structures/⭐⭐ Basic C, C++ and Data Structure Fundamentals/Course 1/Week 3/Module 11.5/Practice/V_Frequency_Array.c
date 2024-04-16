/**
 * @file            C_Compare.c
 * @author          Subodh Chandra Shil
 * @date            2023-04-20
 * @resource:       https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
 */

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

void ans()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int numbers[n1];

    for (int i = 0; i < n1; ++i)
        scanf("%d", &numbers[i]);

    /// pre-compute
    int count[n2 + 1];
    memset(count, 0, sizeof(count));

    for (int i = 0; i < n1; ++i)
    {
        if (numbers[i] >= 1 && numbers[i] <= n2)
        {
            count[numbers[i]]++;
        }
    }

    for (int i = 1; i <= n2; ++i)
        printf("%d\n", count[i]);
}

int main()
{

    ans();

    return 0;
}