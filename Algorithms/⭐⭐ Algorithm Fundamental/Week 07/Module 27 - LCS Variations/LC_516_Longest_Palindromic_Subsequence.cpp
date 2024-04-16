/**
 * @file        LC_516_Longest_Palindromic_Subsequence.cpp
 * @author      Subodh Chandra Shil
 * @link:       https://leetcode.com/problems/longest-palindromic-subsequence/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dp[1010][1010];

    int lcs(string a, int n, string b, int m)
    {
        if (n == 0 || m == 0)
            return 0;

        if (dp[n][m] != -1)
            return dp[n][m];

        if (a[n - 1] == b[m - 1])
        {
            int ans = lcs(a, n - 1, b, m - 1) + 1;
            return dp[n][m] = ans;
        }
        else
        {
            int op1 = lcs(a, n - 1, b, m);
            int op2 = lcs(a, n, b, m - 1);

            return dp[n][m] = max(op1, op2);
        }
    }

    int longestPalindromeSubseq(string s1)
    {
        // memset(dp, -1, sizeof(dp));
        int n = s1.size();
        int m = n;
        string s2 = s1;
        reverse(s2.begin(), s2.end());

        int dp[n + 1][m + 1];
        for (int i = 0; i <= n; ++i)
        {
            for (int j = 0; j <= m; ++j)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
            }
        }

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[n][m];
    }
};