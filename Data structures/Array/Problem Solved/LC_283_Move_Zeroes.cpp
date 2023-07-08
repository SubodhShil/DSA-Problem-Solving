/**
 * @file LC_283_Move_Zeroes.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-07
 * @problem_source: https://leetcode.com/problems/move-zeroes/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /// way 1: moving non-zero to the left most position where zero is presented
    void moveZeroes1(vector<int> &nums)
    {
        int countZeroes = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                countZeroes++;
            else if (countZeroes > 0 && nums[i] != 0)
            {
                nums[i - countZeroes] = nums[i];
                nums[i] = 0;
            }
        }
    }

    void moveZeroes2(vector<int> &nums)
    {
        for (int j = 0, i = 0; j < nums.size(); j++)
            if (nums[j] != 0)
                swap(nums[j], nums[i++]);
    }
};

int main()
{
    Solution sol;
    // vector<int> v{0, 1, 0, 3, 12};
    vector<int> v{0, 0, 17, 0, 30, 0, 0};
    sol.moveZeroes1(v);

    return 0;
}