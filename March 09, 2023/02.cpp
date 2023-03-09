/*
 * Link: https://leetcode.com/problems/missing-number/description/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int size = nums.size();
        int predictedArraySum = size * (size + 1) / 2;
        int actualArraySum = accumulate(nums.begin(), nums.end(), 0);

        return abs(predictedArraySum - actualArraySum);
    }
};
