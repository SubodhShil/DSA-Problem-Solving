/**
 * @file            121_Best_Time_to_Buy_and_Sell_Stock.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-05-14
 */

#include <bits/stdc++.h>
using namespace std;

/// Bruteforce solution
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minProfit = prices[0], actualProfit = 0;
        int n = prices.size();

        for (int i = 1; i < n; ++i)
        {
            int cost = prices[i] - minProfit;
            actualProfit = max(actualProfit, cost);
            minProfit = min(minProfit, prices[i]);
        }

        return actualProfit;
    }
};

int main()
{

    return 0;
}