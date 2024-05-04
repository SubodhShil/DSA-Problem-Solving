/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int n, k, m, a, b, c;
const int N = 1e7 + 13, X = 1e4 + 9;
int rope_len[X];

bool ok(double val)
{
    int cnt_pieces = 0;
    for (int i = 0; i < n; i++)
    {
        cnt_pieces += floor(rope_len[i] / val);
    }

    return cnt_pieces >= k;
}

void ans()
{
    cin >> n >> k;
    int max_val = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> rope_len[i];
        max_val = max(max_val, rope_len[i]);
    }

    /// binary search
    double l = 0, r = max_val, ans = 0;
    while (r - l > 1e-7)
    {
        double mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid;
        }
        else
        {
            r = mid;
        }
    }

    cout << fixed << setprecision(10) << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}