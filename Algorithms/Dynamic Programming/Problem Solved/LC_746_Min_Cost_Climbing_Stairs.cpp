/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/min-cost-climbing-stairs/description/
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
    int dp[2000];
    int costCalculation(vector<int> &cost, int i)
    {
        if (i >= n)
        {
            return 0;
        }

        if (dp[i] != -1)
            return dp[i];

        int choice1 = cost[i] + costCalculation(cost, i + 1);
        int choice2 = cost[i] + costCalculation(cost, i + 2);

        return dp[i] = min(choice1, choice2);
    }

    int minCostClimbingStairs(vector<int> &cost)
    {
        n = cost.size();
        memset(dp, -1, sizeof dp);

        return min(costCalculation(cost, 0), costCalculation(cost, 1));
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;

    return 0;
}