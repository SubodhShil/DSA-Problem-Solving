/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;
const int MAX_VAL = 1e9 + 13;

bool ok(int x)
{
    if (a > b)
        swap(a, b);

    int copy_cnt = 0;
    if (a <= x)
    {
        copy_cnt = 1;
        x -= a;
        copy_cnt += x / a;
        copy_cnt += x / b;
    }

    return copy_cnt >= n;
}

void ans()
{
    cin >> n >> a >> b;

    int l = 1, r = MAX_VAL, ans = 0;

    while (l <= r)
    {
        int mid = l + ((r - l) >> 1);
        if (ok(mid))
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
    while (t--)
        ans();

    return 0;
}