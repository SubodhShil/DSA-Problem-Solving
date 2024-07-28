/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, b, c;

const int mx = 1e5 + 7;
int dp[mx][4];
int a[mx][4];

int ans(int i, int last_work)
{
    if (i > n)
        return 0;

    if (dp[i][last_work] != -1)
        return dp[i][last_work];

    int ret = 0;

    for (int j = 1; j <= 3; ++j)
    {
        if (j != last_work)
        {
            ret = max(ret, a[i][last_work] + ans(i + 1, j));
        }
    }

    return dp[i][last_work] = ret;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    memset(dp, -1, sizeof(dp));

    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i][1] >> a[i][2] >> a[i][3];
    }

    return 0;
}