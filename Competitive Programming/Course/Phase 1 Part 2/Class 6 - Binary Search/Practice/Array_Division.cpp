/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://cses.fi/problemset/task/1085
    * https://vjudge.net/problem/cses-1085
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 2e5 + 10;
int arr[N];

bool ans(int x)
{
    long long current_sum = 0;
    int subarray_cnt = 1;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > x)
            return false;

        current_sum += arr[i];
        if (current_sum > x)
        {
            ++subarray_cnt;
            current_sum = arr[i];
        }
    }

    return subarray_cnt <= k;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> k;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    /// answer range
    int l = 1, r = 2e14 + 10, res = 0;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ans(mid))
        {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << res << endl;

    return 0;
}
