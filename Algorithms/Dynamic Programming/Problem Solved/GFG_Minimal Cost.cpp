/*
                            ॐ JAY JAY SRI RAM ॐ

    *
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
    int helper(int i, int k, vector<int> &arr)
    {
        if (i == 0)
            return 0;

        int minCost = INT_MAX;
        for (int j = 1; j <= k; ++j)
        {
            if (i >= j)
                minCost = min(minCost, abs(arr[i] - arr[i - j]) + helper(i - j, k, arr));
        }

        return minCost;
    }

    int minimizeCost(int k, vector<int> &arr)
    {
        return helper(arr.size() - 1, k, arr);
    }
};

class TopDownSolution
{
public:
    int helper(int i, int k, vector<int> &dp, vector<int> &arr)
    {
        if (i == 0)
            return dp[i] = 0;

        if (dp[i] != -1)
            return dp[i];

        int minCost = INT_MAX;
        for (int j = 1; j <= k; ++j)
        {
            if (i >= j)
                minCost = min(minCost, abs(arr[i] - arr[i - j]) + helper(i - j, k, dp, arr));
        }

        return dp[i] = minCost;
    }

    int minimizeCost(int k, vector<int> &arr)
    {
        int n = arr.size();
        vector<int> dp(n + 1, -1);
        return helper(n - 1, k, dp, arr);
    }
};

class BottomUpSolution
{
public:
    int minimizeCost(int k, vector<int> &arr)
    {
        int n = arr.size();
        vector<int> dp(n + 1, 0);

        dp[0] = 0;

        for (int i = 1; i < n; ++i)
        {
            int minCost = INT_MAX;

            for (int j = 1; j <= k; ++j)
            {
                if (i >= j)
                {
                    minCost = min(minCost, abs(arr[i] - arr[i - j]) + dp[i - j]);
                }
            }
            dp[i] = minCost;
        }

        return dp[n - 1];
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}