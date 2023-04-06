/**
 * @file CS_Modular_Exponentiation.cpp
 * @author Subodh Chandra Shil
 * @date 2023-03-31
 * @problem_source: https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146
 */

#include <bits/stdc++.h>
using namespace std;

/**
 * @brief
 * formula of modulo arithmetic
        (a + b) % m = a % m + b % m
        (a - b) % m = a % m - b % m
        (a x b) % m = a % b x b % m
 * @return int
 */

int modularExponentiation(int x, int n, int m)
{
    long long ans = 1;
    long long power = (long long)n;
    long long number = (long long)x;

    while (power)
    {
        if (power & 1)
        {
            ans = (ans % m * number % m) % m;
        }

        number = (long long)(number % m * number % m) % m;
        power >>= 1;
    }

    return ans;
}

int main()
{

    return 0;
}