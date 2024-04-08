/**
 * @file        K_Sum_Digits.c
 * @author      Subodh Chandra Shil
 * @date        2023-04-20
 * @resource:   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
 */

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

void ans()
{
    int n;
    scanf("%d", &n);
    char number[n];
    scanf("%s", &number);

    int sum = 0;
    for (int i = 0; i < strlen(number); ++i)
    {
        sum += number[i] - '0';
    }

    printf("%d\n", sum);
}

int main()
{
    ans();

    return 0;
}