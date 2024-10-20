/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/decode-ways/
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
    int n;
    int dp[200];

    int solve(string &s, int i)
    {
        if (dp[i] != -1)
            return dp[i];

        if (i == n)
            return dp[i] = 1;

        if (s[i] == '0')
            return dp[i] = 0;

        int result = solve(s, i + 1);
        if (i + 1 < n)
            if (s[i] == '1' or (s[i] == '2' and s[i + 1] <= '6'))
                result += solve(s, i + 2);

        return dp[i] = result;
    }

    int numDecodings(string s)
    {
        n = s.size();
        memset(dp, -1, sizeof dp);

        return solve(s, 0);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;

    return 0;
}