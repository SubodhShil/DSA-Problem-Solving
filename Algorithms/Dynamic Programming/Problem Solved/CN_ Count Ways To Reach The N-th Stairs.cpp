/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.naukri.com/code360/problems/count-ways-to-reach-nth-stairs_798650
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

int mod = 1e9 + 7;

int count(vector<int> &dp, int n)
{
    if (n <= 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = (count(dp, n - 1) % mod + count(dp, n - 2) % mod) % mod;
    return dp[n];
}

int countDistinctWays(int nStairs)
{
    vector<int> dp(nStairs + 1, -1);
    int ans = count(dp, nStairs);
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}