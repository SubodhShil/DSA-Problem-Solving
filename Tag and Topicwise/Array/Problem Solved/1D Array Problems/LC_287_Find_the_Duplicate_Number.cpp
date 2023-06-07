/**
 * @file        LC_287_Find_the_Duplicate_Number.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-07
 * @resources:  https://leetcode.com/problems/find-the-duplicate-number/description/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    /// using indecies and modifies the array
    int findDuplicate(vector<int> &nums)
    {
        int size = nums.size();
        for (int i = 0; i < size; ++i)
        {
            int index = abs(nums[i]) - 1;
            nums[index] *= -1;

            if (nums[index] > 0)
                return abs(nums[i]);
        }

        return -1;
    }
};

class Solution2
{
public:
    int findDuplicate(vector<int> &nums)
    {
        map<int, int> mp;
        for (auto i : nums)
        {
            mp[i]++;
            if (mp[i] > 1)
                return i;
        }

        return -1;
    }
};

/// Floyd's cycle detection algorithm
class Solution3
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int slow = nums[0];
        int fast = nums[0];

        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        fast = nums[0];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }

        return fast;
    }
};

int main()
{

    return 0;
}