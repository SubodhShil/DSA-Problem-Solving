/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.naukri.com/code360/problems/count-ways-to-reach-nth-stairs_798650?
    * https://leetcode.com/problems/climbing-stairs/description/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    return 0;
}
