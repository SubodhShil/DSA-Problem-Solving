/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/edu/course/2/lesson/6/5/practice/contest/285084/problem/C
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m;

const int N = 1e5 + 10;
int a[N], b[N];

int get_count(int lim)
{
    // int l = 1, r = n, ans = 0;
    // while (l <= r)
    // {
    //     int mid = l + (r - l) / 2;
    //     if (b[mid] <= lim)
    //     {
    //         ans = mid;
    //         l = mid + 1;
    //     }
    //     else
    //         r = mid - 1;
    // }

    // return ans;

    return upper_bound(b + 1, b + n + 1, lim) - b - 1;
}

int f(int x)
{
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        int lim = x - a[i];
        cnt += get_count(lim);
    }

    return cnt >= k;
}

void ans()
{
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i <= n; ++i)
        cin >> b[i];

    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);

    int l = 1, r = 2e9, ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (f(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
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
