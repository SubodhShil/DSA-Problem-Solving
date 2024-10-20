/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/minimal-cost/1?
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
    int n, limit;
    int dp[10009];

    int f(vector<int> &arr, int i)
    {
        if (i == n - 1)
        {
            return 0;
        }

        if (dp[i] != -1)
            return dp[i];

        int cost = INT32_MAX;
        for (int j = i + 1; j <= i + limit; ++j)
        {
            if (j < n)
            {
                int nextCost = abs(arr[i] - arr[j]) + f(arr, j);
                cost = min(cost, nextCost);
            }
        }

        return dp[i] = cost;
    }

    int minimizeCost(int k, vector<int> &arr)
    {
        n = arr.size();
        limit = k;
        memset(dp, -1, sizeof dp);
        return f(arr, 0);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;

    return 0;
}