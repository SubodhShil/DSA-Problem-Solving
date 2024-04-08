/* Coin change is the subset sum probelm for unbounded knapsack
This question can appear in an interview with any of the two variations:
1. Maximum ways to get the sum
2. Minimum coins to acheive the sum */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int items[n];
    for (int i = 0; i < n; ++i)
        cin >> items[i];

    int sum;
    cin >> sum;
    int dp[n + 1][sum + 1];

    dp[0][0] = 1;
    for (int i = 1; i <= sum; ++i)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= sum; ++j)
        {
            if (j >= items[i - 1])
                dp[i][j] = dp[i][j - items[i - 1]] + dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    /// This will give you the "number of ways you'll get the result"
    cout << dp[n][sum] << endl;

    return 0;
}

/*
Input:
3
1 2 3
5
 */

// ---------------------------------------- //
/// Leetcode 518. Coin Change II
/// https://leetcode.com/problems/coin-change-ii/description/
class Solution
{
public:
    int change(int amount, vector<int> &coins)
    {
        int n = coins.size();
        int dp[n + 1][amount + 1];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 0; j <= amount; ++j)
            {
                if (j >= coins[i - 1])
                    dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }

        return dp[n][amount];
    }
};