#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int LCS(string a, int n, string b, int m)
{
    if (n == 0 || m == 0)
        return 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    if (a[n - 1] == b[m - 1])
    {
        int ans = LCS(a, n - 1, b, m - 1);
        /// 1 character matched, so add 1
        return dp[n][m] = ans + 1;
    }
    else
    {
        int op1 = LCS(a, n - 1, b, m);
        int op2 = LCS(a, n, b, m - 1);
        return dp[n][m] = max(op1, op2);
    }
}

int main()
{
    string a, b;
    cin >> a >> b;
    memset(dp, -1, sizeof(dp));
    cout << LCS(a, a.size(), b, b.size());

    return 0;
}

/*
Input:
abcdfgr
acfdgr
Output:
5
 */