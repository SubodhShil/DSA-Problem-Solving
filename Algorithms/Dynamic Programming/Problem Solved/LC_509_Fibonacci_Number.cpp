/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/fibonacci-number/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

/*
 * Recursive memoization solution or top-down solution
 * Time complexity: O(N)
 * Space complexity: O(2N)
        O(N) => Recursive stack space in the memory + O(N) => auxiliary space for the 'dp' array
 */

class Solution
{
public:
    int dp[100];
    int helper(int n)
    {
        if (n == 0 || n == 1)
            return dp[n] = n;

        if (dp[n] != -1)
            return dp[n];

        return dp[n] = fib(n - 1) + fib(n - 2);
    }

    int fib(int n)
    {
        memset(dp, -1, sizeof(dp));
        return helper(n);
    }
};

/*
 * Tabulation or bottom up
 * T.C => O(N)
 * S.C => O(N)
 */

class Solution
{
public:
    int fib(int n)
    {
        if (n <= 0)
            return n;

        vector<int> dp(n + 1, 0);
        dp[0] = 0, dp[1] = 1;

        for (int i = 2; i <= n; ++i)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}