/*
* link1: https://leetcode.com/problems/delete-operation-for-two-strings/
* link2: https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1?

 */

#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int lcs(string a, int n, string b, int m)
{
    if (n == 0 || m == 0)
        return 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    if (a[n - 1] == b[m - 1])
    {
        int ans = lcs(a, n - 1, b, m - 1);
        return dp[n][m] = ans + 1;
    }
    else
    {
        int choice1 = lcs(a, n - 1, b, m);
        int choice2 = lcs(a, n, b, m - 1);
        return dp[n][m] = max(choice1, choice2);
    }
}

int minOperations(string a, string b)
{
    memset(dp, -1, sizeof(dp));

    int lcsSize = lcs(a, a.size(), b, b.size()) * 2;
    return a.size() + b.size() - lcsSize;
}

int main()
{
    /// number of deletion, D = len(string A) - LCS
    /// number of insertions, I = len(string B) - LCS

    cout << minOperations("fcd", "headbgfbb");

    return 0;
}