/**
 * @file Implement_Power_Function.cpp
 * @author
 * @date 2023-04-01
 *
 */

#include <bits/stdc++.h>
using namespace std;

int powmod(int x, int n, int d)
{
    /// number % 1 is always 0
    /// 0 ^ power is always 0
    if (x == 0 || d == 1)
    {
        return 0;
    }

    /// number ^ power as 0 results 1
    /// 1 ^ any power results 1
    if (n == 0 || x == 1)
    {
        return 1;
    }

    long long number = x;
    long long power = n;
    long long modulo = d;

    long long ans = 1;
    while (power)
    {
        if (power & 1)
            ans = (ans % modulo * number % modulo) % modulo;

        number = (number % modulo * number % modulo) % modulo;

        power >>= 1;
    }

    return (ans > 0) ? ans : abs(d - abs(ans));
}

int main()
{
    // cout << powmod(-1, 1, 20) << endl;
    cout << powmod(213, 231, 1) << endl;

    return 0;
}
