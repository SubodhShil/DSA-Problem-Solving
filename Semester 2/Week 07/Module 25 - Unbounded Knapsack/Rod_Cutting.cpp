/**
 * @file        Rod_Cutting.cpp
 * @author      Subodh Chandra Shil
 * @link        https://practice.geeksforgeeks.org/problems/rod-cutting0840/1
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dp[1005][1005];

    int unboundedKnapsack(int n, int capacity, int w[], int v[])
    {
        if (n == 0 || capacity == 0)
            return 0;

        if (dp[n][capacity] != -1)
            return dp[n][capacity];

        if (capacity >= w[n - 1])
        {
            int choice1 = unboundedKnapsack(n, capacity - w[n - 1], w, v) + v[n - 1];
            int choice2 = unboundedKnapsack(n - 1, capacity, w, v);
            return dp[n][capacity] = max(choice1, choice2);
        }
        else
            return dp[n][capacity] = unboundedKnapsack(n - 1, capacity, w, v);
    }

    int cutRod(int price[], int n)
    {
        memset(dp, -1, sizeof(dp));
        int capacity = n;
        int weight[n];
        for (int i = 0; i < n; ++i)
        {
            weight[i] = i + 1;
        }

        int result = unboundedKnapsack(n, capacity, weight, price);

        return result;
    }
};

int main()
{
    /// test here
    return 0;
}