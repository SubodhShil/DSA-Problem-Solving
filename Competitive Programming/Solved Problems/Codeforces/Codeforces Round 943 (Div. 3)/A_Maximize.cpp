/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/1968/problem/A
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int x, k, m, a, b, c;

void ans()
{
    cin >> x;

    int prev = INT32_MIN, res = 0;

    for (int y = 1; y <= x - 1; ++y)
    {
        int m = (__gcd(x, y) + y);
        if (m > prev)
            prev = m, res = y;
    }

    cout << res << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        ans();

    return 0;
}