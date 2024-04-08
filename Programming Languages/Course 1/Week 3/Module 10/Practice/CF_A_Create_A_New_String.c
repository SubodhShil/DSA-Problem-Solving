/**
 * @file CF_A_Create_A_New_String.c
 * @author Subodh Chandra Shil
 * @date 2023-04-17
 * @problem_source: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
 */

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main()
{
    const int size = 1e3;
    char str1[size], str2[size];

    scanf("%s %s", &str1, &str2);

    int str1_len = strlen(str1);
    int str2_len = strlen(str2);

    printf("%d %d\n", str1_len, str2_len);
    printf("%s %s", str1, str2);

    return 0;
}