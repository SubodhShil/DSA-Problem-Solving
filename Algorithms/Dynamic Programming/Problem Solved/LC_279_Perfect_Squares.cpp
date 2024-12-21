/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/perfect-squares/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class RecursiveSolution
{
public:
    int helper(int n)
    {
        if (n == 0)
            return 0;

        int minCount = INT_MAX;
        for (int i = 1; i * i <= n; ++i)
        {
            int result = helper(n - i * i) + 1;
            minCount = min(minCount, result);
        }

        return minCount;
    }

    int numSquares(int n)
    {
        return helper(n);
    }
};

class SolutionTopDown
{
public:
    int helper(vector<int> &dp, int n)
    {
        if (n == 0)
            return dp[n] = 0;

        if (dp[n] != -1)
            return dp[n];

        int minCount = INT_MAX;
        for (int i = 1; i * i <= n; ++i)
        {
            int result = helper(dp, n - i * i) + 1;
            minCount = min(minCount, result);
        }

        return dp[n] = minCount;
    }

    int numSquares(int n)
    {
        vector<int> dp(n + 1, -1);
        return helper(dp, n);
    }
};

class SolutionBottomUp
{
public:
    int numSquares(int n)
    {
        vector<int> dp(n + 1, 0);

        dp[0] = 0;

        for (int i = 1; i <= n; ++i)
        {
            int minCount = INT_MAX;

            // perfect square
            for (int j = 1; j * j <= i; ++j)
            {
                int result = dp[i - j * j] + 1;
                minCount = min(minCount, result);
            }
            dp[i] = minCount;
        }

        return dp[n];
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}