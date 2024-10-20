/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/house-robber/description/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class Solution
{
public:
    int n;
    int dp[1005];

    int maximumMoneyBack(vector<int> &nums, int i)
    {
        if (i < 0)
            return 0;

        if (i == 0)
            return nums[i];

        if (dp[i] != -1)
            return dp[i];

        int pick = nums[i] + maximumMoneyBack(nums, i - 2);
        int notPick = maximumMoneyBack(nums, i - 1);

        return dp[i] = max(pick, notPick);
    }

    int maximumProfitFront(vector<int> &nums, int i)
    {
        if (i >= n)
            return 0;
        if (i == n - 1)
            return nums[i];

        if (dp[i] != -1)
            return dp[i];

        int pick = nums[i] + maximumProfitFront(nums, i + 2);
        int notPick = maximumProfitFront(nums, i + 1);
        return dp[i] = max(pick, notPick);
    }

    int rob(vector<int> &nums)
    {
        n = nums.size();
        memset(dp, -1, sizeof dp);

        // return maximumMoneyBack(nums, n - 1);
        return maximumProfitFront(nums, 0);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}