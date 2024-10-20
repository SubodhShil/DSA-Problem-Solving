/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/house-robber-ii/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

class Solution
{
public:
    int n;
    int dp[1005];

    int maximumProfit(vector<int> &nums, int i, int n)
    {
        if (i > n)
            return 0;

        if (i == n)
            return nums[i];

        if (dp[i] != -1)
            return dp[i];

        int pick = nums[i] + maximumProfit(nums, i + 2, n);
        int notPick = maximumProfit(nums, i + 1, n);

        return dp[i] = max(pick, notPick);
    }

    int rob(vector<int> &nums)
    {
        n = nums.size();

        if (n == 1)
            return nums[0];

        memset(dp, -1, sizeof dp);
        int excludeLast = maximumProfit(nums, 0, n - 2);

        memset(dp, -1, sizeof dp);
        int excludeFirst = maximumProfit(nums, 1, n - 1);

        return max(excludeLast, excludeFirst);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}