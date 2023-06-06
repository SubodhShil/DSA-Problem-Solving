/**
 * @file        LC_53_Maximum_Subarray.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-05-30
 * @resource:   https://leetcode.com/problems/maximum-subarray/description/
 *              https://youtu.be/w4W6yya1PIc
 */

#include <bits/stdc++.h>
using namespace std;

/// contiguous subarray: the index should be continuous and sequential
/// and the difference between two index should not exceed 1

/**
    Kadane's algorithm
    ------------------
    1. Calculate the current sum in each iteration, initial value of current sum is 0.
    2. Find the maximum value by comparing current and maximum value, initally first element value is the maximum value. We will return maximum value as our result.
    3. If current sum gets negative replace the value with 0.
 */

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int size = nums.size();
        int currentSum = 0, maximumValue = nums[0];

        for (int i = 0; i < size; ++i)
        {
            /// calculate currentSum
            currentSum += nums[i];

            /// compare and find max
            maximumValue = max(currentSum, maximumValue);

            if (currentSum < 0)
            {
                currentSum = 0;
            }
        }

        return maximumValue;
    }
};

int main()
{

    return 0;
}