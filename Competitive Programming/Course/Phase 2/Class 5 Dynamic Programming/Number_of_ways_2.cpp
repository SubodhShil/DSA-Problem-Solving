/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 1e3 + 7, mod = 1e9 + 7;
int ways_count[N];

int count(int n)
{
    if (n == 0)
        return 1;

    if (ways_count[n] != -1)
        return ways_count[n];

    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        ans += count(n - i);
        ans %= mod;
    }

    return ways_count[n] = ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;

    return 0;
}