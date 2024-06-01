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

class Solution
{
public:
    long long mod = 1e9 + 7;

    long long count(int i, vector<long long> &dp)
    {
        /// how n = 4 is equivalent to 4
        /*
            for 1   => 1 + 1 + 1 + 1
                    => 1 + 3
            for 3   => 3 + 1
            for 4   => 4
            --------------------------
            total       4 ways
         */

        if (i <= 0)
            return 0;

        if (i == 1 or i == 2)
            return 1;

        if (i == 3)
            return 2;

        if (i == 4)
            return 4;

        if (dp[i] != -1)
            return dp[i];

        dp[i] = (count(i - 1, dp) % mod + count(i - 3, dp) % mod + count(i - 4, dp) % mod) % mod;

        return dp[i];
    }

    long long countWays(int N)
    {
        vector<long long> dp(N + 1, -1);

        return count(N, dp);
    }
};
int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}