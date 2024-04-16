/*

You'll be given an array, from which you've to create two set with eqaul sum value

Insights:
1.  If we could extract a half or single answer then
    it is sure that the left over set has the remaining result

2. The sum of the array elements needs to be an even number

*/

#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

bool subset_sum(int n, int target, int setArray[])
{
    if (n == 0)
    {
        if (target == 0)
            return true;
        else
            return false;
    }

    if (dp[n][target] != -1)
        return dp[n][target];

    if (target >= setArray[n - 1])
    {
        dp[n][target] = subset_sum(n - 1, target - setArray[n - 1], setArray) || subset_sum(n - 1, target, setArray);
    }
    else
        dp[n][target] = subset_sum(n - 1, target, setArray);
}

int main()
{
    int n, totalSum = 0;
    cin >> n;
    int setArray[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> setArray[i];
        totalSum += setArray[i];
    }

    memset(dp, -1, sizeof(dp));
    int target = 0;

    if (totalSum % 2 == 0)
    {
        target = totalSum / 2;
        cout << subset_sum(n, target, setArray) << endl;

        /// tabulation

        /* int dp[n + 1][target + 1];
        dp[0][0] = true;
        for (int i = 1; i <= target; ++i)
            dp[0][i] = false;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 0; j <= target; ++j)
            {
                if (j >= i)
                {
                    dp[i][j] = dp[i - 1][j - setArray[i - 1]] || dp[i - 1][j];
                }
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }

        cout << dp[n][target] << endl; */
    }
    else
        cout << "Not possible to get result";

    return 0;
}