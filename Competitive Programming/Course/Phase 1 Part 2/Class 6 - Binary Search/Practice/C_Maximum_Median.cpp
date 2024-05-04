/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/1201/problem/C
    * https://vjudge.net/problem/codeforces-1201c
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k;

bool f(int x, vector<int> &arr)
{
    int op = 0;
    int n = arr.size();

    for (int i = n / 2; i < n; ++i)
    {
        if (arr[i] < x)
        {
            op += x - arr[i];
        }
    }

    return op <= k;
}

void ans()
{
    cin >> n >> k;

    vector<int> arr(n, 0);
    for (auto &i : arr)
        cin >> i;

    sort(arr.begin(), arr.end());

    int l = 0, r = 2e9, ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (f(mid, arr))
        {
            ans = max(ans, mid);
            l = mid + 1;
        }
        else
            r = mid - 1;
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