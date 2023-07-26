/**
 * @file        GFG_Nth_Fibonacci_Number.cpp
 * @author      Subodh Chandra Shil
 * @link:       https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    /// Using memoization
    /// T.C => O(N)
    /// S.C => O(N) + O(N)
    int mod = 1e9 + 7;
    int solver(int n, vector<int> &dp)
    {
        if (n <= 1)
            return n;

        if (dp[n] != -1)
            return dp[n];

        return dp[n] = (solver(n - 1, dp) % mod + solver(n - 2, dp) % mod) % mod;
    }

    int nthFibonacci(int n)
    {
        vector<int> dp(n + 1, -1);
        return solver(n, dp);
    }
};

class Solution2
{
public:
    /// Using tabulation
    /// T.C => O(N)
    /// S.C => O(N) + O(N)
    int mod = 1e9 + 7;
    int nthFibonacci(int n)
    {
        vector<int> dp(n + 1, -1);
        dp[0] = 0, dp[1] = 1;

        for (int i = 2; i <= n; ++i)
        {
            dp[i] = (dp[i - 1] % mod + dp[i - 2] % mod) % mod;
        }

        return dp[n];
    }
};

int main()
{

    return 0;
}