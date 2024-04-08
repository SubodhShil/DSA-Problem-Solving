/*
                            ॐ ॐ
    * https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
    * https://leetcode.com/problems/maximum-subarray/
    * Author: Subodh Chandra Shil
    * Tag: Array
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

// [5, -5, 5]

class Solution
{
public:
    long long maxSubArray(vector<int> &nums)
    {
        long long current_sum = 0, maxSum = -1e18;
        int n = nums.size();

        for (int i = 0; i < n; ++i)
        {
            current_sum += nums[i];
            maxSum = max(maxSum, current_sum);
            current_sum = max(current_sum, 0LL);
        }

        return maxSum;
    }
};
int main()
{

    return 0;
}