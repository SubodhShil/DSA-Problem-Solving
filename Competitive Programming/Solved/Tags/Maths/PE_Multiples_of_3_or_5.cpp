/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://projecteuler.net/problem=1
    * Author: Subodh Chandra Shil
    * Tag: Math
    *

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

void ans()
{
    int n = 1000;
    int sum = 0;
    for (int i = 3; i < n; ++i)
        if (i % 3 == 0 or i % 5 == 0)
            sum += i;

    cout << sum << endl;
}

int32_t main()
{
    int t = 1;
    while (t--)
        ans();

    return 0;
}