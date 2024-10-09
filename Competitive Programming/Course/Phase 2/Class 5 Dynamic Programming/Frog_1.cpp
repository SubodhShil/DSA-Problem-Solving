/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/atcoder-dp_a
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, ans, b, c;
const int N = 1e5 + 9;
int arr[N], dp[N];

int f(int i)
{
    if (i > n)
        return INT32_MAX;
    if (i == n)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    int ans = abs(arr[i] - arr[i + 1]) + f(i + 1);
    ans = min(ans, abs(arr[i] - arr[i + 2]) + f(i + 2));

    return dp[i] = ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    memset(dp, -1, sizeof dp);

    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
    }

    cout << f(1) << endl;

    return 0;
}