/*
                            ॐ JAY JAY SRI RAM ॐ

    *
    * Author: Subodh Chandra Shil
    * Tag: Math
    *

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

#define factorial(n) ({long long result = 1; for (int i = 2; i <= (n); ++i) result *= i; result; })

bool ans(int num)
{
    int n = num;
    int digitFactorialSum = 0;
    while (n)
    {
        digitFactorialSum += factorial(n % 10);
        n /= 10;
    }

    return (digitFactorialSum % num == 0) ? 1 : 0;
}

int32_t main()
{
    int n, cnt = 0;
    cin >> n;

    for (int i = 10; i <= n; ++i)
    {
        if (ans(i))
            cnt += i;
    }

    cout << cnt << endl;

    return 0;
}