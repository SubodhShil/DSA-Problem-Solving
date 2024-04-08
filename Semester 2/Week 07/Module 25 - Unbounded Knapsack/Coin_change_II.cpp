#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int w[n];
    for (int i = 0; i < n; ++i)
        cin >> w[i];

    int sum;
    cin >> sum;

    int dp[n + 1][sum + 1];
    dp[0][0] = 0;
    for (int i = 1; i <= sum; ++i)
        dp[0][i] = INT32_MAX;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= sum; ++j)
        {
            if (j >= w[i - 1])
                dp[i][j] = min(dp[i][j - w[i - 1]] + 1, dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    if (dp[n][sum] == INT32_MAX)
        cout << -1;
    else
        cout << dp[n][sum];

    return 0;
}

// ---------------------------------------- //
/// Leetcode 322. Coin Change
/// https://leetcode.com/problems/coin-change/
class Solution
{
public:
    int coinChange(vector<int> &w, int sum)
    {
        int n = w.size();
        const int INF = INT32_MAX - 100;

        int dp[n + 1][sum + 1];
        dp[0][0] = 0;

        for (int i = 1; i <= sum; ++i)
            dp[0][i] = INF;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 0; j <= sum; ++j)
            {
                if (j >= w[i - 1])
                    dp[i][j] = min(dp[i][j - w[i - 1]] + 1, dp[i - 1][j]);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }

        return (dp[n][sum] == INF) ? -1 : dp[n][sum];
    }
};