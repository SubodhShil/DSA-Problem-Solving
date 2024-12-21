/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.naukri.com/code360/problems/frog-jump_3621012?
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class RecursionSolution
{
public:
    int helper(vector<int> &heights, int i)
    {
        if (i <= 0)
            return 0;

        int next1 = INT_MAX, next2 = INT_MAX;
        if (i >= 1)
            next1 = helper(heights, i - 1) + abs(heights[i] - heights[i - 1]);
        if (i > 1)
            next2 = helper(heights, i - 2) + abs(heights[i] - heights[i - 2]);

        return min(next1, next2);
    }

    int frogJump(int n, vector<int> &heights)
    {
        return helper(heights, n - 1);
    }
};

class TopDownSolution
{
public:
    int helper(vector<int> &heights, vector<int> &dp, int i)
    {
        // base case
        if (i <= 0)
            return dp[i] = 0;

        if (dp[i] != -1)
            return dp[i];

        int next1 = INT_MAX, next2 = INT_MAX;
        if (i >= 1)
            next1 = helper(heights, dp, i - 1) + abs(heights[i] - heights[i - 1]);
        if (i > 1)
            next2 = helper(heights, dp, i - 2) + abs(heights[i] - heights[i - 2]);

        return dp[i] = min(next1, next2);
    }

    int frogJump(int n, vector<int> &heights)
    {
        vector<int> dp(n + 1, -1);
        return helper(heights, dp, n - 1);
    }
};

class BottomUpSolution
{
public:
    int frogJump(int n, vector<int> &heights)
    {
        vector<int> dp(n + 1, 0);
        dp[0] = 0;

        for (int i = 1; i < n; ++i)
        {
            int next1 = INT_MAX, next2 = INT_MAX;
            if (i >= 1)
                next1 = dp[i - 1] + abs(heights[i] - heights[i - 1]);
            if (i > 1)
                next2 = dp[i - 2] + abs(heights[i] - heights[i - 2]);

            dp[i] = min(next1, next2);
        }

        return dp[n - 1];
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}