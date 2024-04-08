/*
                            ॐ ॐ

    https://codeforces.com/problemset/problem/1872/C
    Author: Subodh Chandra Shil
    Tag: Math, GCD
    ACCEPTED

                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void ans()
{
    ll l, r;
    cin >> l >> r;
    ll ans = 0;

    /// GCD of any even number and 2 is greater than 1.
    if (r <= 3)
    {
        cout << -1 << endl;
        return;
    }

    if (r % 2 == 0)
        ans = r - 2;
    else
        ans = r - 3;

    if ((2 + ans <= r) and (2 + ans >= l))
        cout << 2 << " " << ans << endl;
    else
    {
        bool flag = false;
        for (ll i = 2; (i * i) <= r; ++i)
        {
            if (r % i == 0)
            {
                cout << i << ' ' << r - i << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
            cout << -1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}