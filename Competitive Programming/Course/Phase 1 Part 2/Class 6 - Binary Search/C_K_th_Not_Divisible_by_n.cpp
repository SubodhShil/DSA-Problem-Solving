/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/problemset/problem/1352/C
    * https://vjudge.net/problem/codeforces-1352c
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

int f(int x)
{
    return (x - (x / n)) >= k;
}

void ans()
{
    cin >> n >> k;
    int l = 1, r = 2e9, ans = 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (f(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans << endl;
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