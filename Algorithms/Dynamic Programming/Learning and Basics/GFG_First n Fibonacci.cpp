/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1?
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
    vector<long long> printFibb(int n)
    {
        vector<long long> dp(n, 0);

        if (n >= 1)
            dp[0] = 1;
        if (n >= 2)
            dp[1] = 1;

        for (int i = 2; i < n; ++i)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}